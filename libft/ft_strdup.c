/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 20:40:12 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/09 19:52:10 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while ((dest[i] = src[i]))
		i++;
	return (dest);
}

char	*ft_strdup(char *s)
{
	char	*tmp;

	tmp = (char *)malloc(ft_strlen(s) + 1);
	if (tmp != NULL)
		ft_strcpy(tmp, s);
	return (tmp);
}
