/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:27:27 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/14 21:04:13 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr || !s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len && s[start + i] != '\0')
		{
			substr[i] = s[start + i];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
