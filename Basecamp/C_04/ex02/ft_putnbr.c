/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:14:42 by tmarinho          #+#    #+#             */
/*   Updated: 2020/12/04 01:25:36 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
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
}
