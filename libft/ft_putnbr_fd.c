/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 19:59:45 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/07 00:46:04 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;
	char		list_numbers[11];
	int			contador;

	number = n;
	if (number == 0)
		write(fd, "0", 1);
	contador = 0;
	if (number < 0)
	{
		number = -number;
		write(fd, "-", 1);
	}
	while (number > 0)
	{
		list_numbers[contador] = number % 10 + '0';
		number = number / 10;
		contador++;
	}
	while (contador > 0)
	{
		write(fd, &list_numbers[contador - 1], 1);
		contador--;
	}
}
