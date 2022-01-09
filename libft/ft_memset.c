/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 00:51:02 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/06 22:25:01 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *v, int c, size_t n)
{
	unsigned char	*pointer;
	unsigned char	chr;
	size_t			i;

	pointer = (unsigned char *)v;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		pointer[i] = chr;
		i++;
	}
	return (v);
}
