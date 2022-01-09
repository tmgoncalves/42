/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_dec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 22:27:13 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/19 21:40:43 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_hexa_len(size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

size_t	ft_h_dec(unsigned int nbrhex, char ch)
{
	char			*digit;
	char			*p_hex;
	size_t			index;
	unsigned int	size;

	size = ft_hexa_len(nbrhex);
	index = size;
	digit = "0123456789abcdef";
	if (ch == 'X')
		digit = "0123456789ABCDEF";
	p_hex = ft_calloc(index, sizeof(char));
	if (!p_hex)
		return (0);
	while (index)
	{
		p_hex[--index] = digit[nbrhex % 16];
		nbrhex = nbrhex / 16;
	}
	write(1, p_hex, size);
	free(p_hex);
	return (size);
}
