/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 01:22:36 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/06 20:14:41 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*new_dest;
	unsigned char	*new_src;
	unsigned char	new_c;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	new_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (new_src[i] != new_c)
			new_dest[i] = new_src[i];
		else
		{
			new_dest[i] = new_src[i];
			return (&new_dest[i + 1]);
		}
		i++;
	}
	return (NULL);
}
