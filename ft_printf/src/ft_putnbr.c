/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:55:32 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/19 20:22:18 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_putnbr(int nb)
{
	long int	number;
	char		list_numbers[11];
	int			contador;

	number = nb;
	if (number == 0)
		write(1, "0", 1);
	contador = 0;
	if (number < 0)
	{
		number = -number;
		write(1, "-", 1);
	}
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
	return (0);
}
