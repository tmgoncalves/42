/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_ptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:47:36 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/19 21:40:20 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	hexa_size(size_t num)
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

size_t	ft_p_ptr(size_t nbrhex)
{
	char	*digit;
	char	*p_hex;
	int		index;
	size_t	size;

	size = hexa_size(nbrhex);
	index = size;
	digit = "0123456789abcdef";
	p_hex = malloc((index * sizeof(char)) + 2);
	if (!p_hex)
		return (0);
	p_hex[0] = '0';
	p_hex[1] = 'x';
	while (index)
	{
		p_hex[--index + 2] = digit[nbrhex % 16];
		nbrhex = nbrhex / 16;
	}
	write(1, p_hex, size + 2);
	free(p_hex);
	return (size + 2);
}
