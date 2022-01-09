/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 01:22:36 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/13 21:56:20 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;
	size_t		i;

	new_dest = (char *)dest;
	new_src = (const char *)src;
	if (new_dest == NULL && new_src == NULL)
		return (NULL);
	i = 0;
	if (new_dest > new_src)
	{
		i = n;
		while (i > 0)
		{
			new_dest[i - 1] = new_src[i - 1];
			i--;
		}
	}
	else
		while (i < n)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	return (dest);
}
