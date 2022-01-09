/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:06:56 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/14 19:42:37 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lengh_dst;
	size_t	lengh_src;
	size_t	cp_dstlen;
	size_t	i;

	lengh_dst = ft_strlen(dst);
	lengh_src = ft_strlen(src);
	cp_dstlen = lengh_dst;
	i = 0;
	if (size <= lengh_dst)
		return (lengh_src + size);
	while (src[i] && cp_dstlen != size - 1)
	{
		dst[cp_dstlen] = src[i];
		cp_dstlen++;
		i++;
	}
	dst[cp_dstlen] = '\0';
	return (lengh_dst + lengh_src);
}
