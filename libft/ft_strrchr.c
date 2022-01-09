/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 02:54:20 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/07 18:29:00 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*len;

	len = ft_strchr(str, '\0');
	while (*len != (char)ch)
	{
		if (len == str)
			return (NULL);
		len--;
	}
	return (char*)len;
}
