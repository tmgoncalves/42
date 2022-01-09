/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_unsignedint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:33:41 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/19 20:23:01 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_nbrlen(size_t n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		while (n / 10 != 0)
		{
			n = n / 10;
			size++;
		}
		return (size);
	}
	else
	{
		while (n / 10 != 0)
		{
			n = n / 10;
			size++;
		}
		return (size + 1);
	}
}

size_t	ft_p_unsignedint(unsigned int i)
{
	unsigned int	number;
	char			list_numbers[11];
	int				contador;

	number = i;
	if (number == 0)
		write(1, "0", 1);
	contador = 0;
	while (number > 0)
	{
		list_numbers[contador] = number % 10 + '0';
		number = number / 10;
		contador++;
	}
	while (contador > 0)
	{
		write(1, &list_numbers[contador - 1], 1);
		contador--;
	}
	return (ft_nbrlen(i));
}
