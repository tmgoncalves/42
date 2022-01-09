/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 23:04:57 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/19 20:17:38 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_nbrlen(int n)
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

int	ft_p_integer(int nb)
{
	ft_putnbr(nb);
	if (nb == 0)
		return (1);
	if (nb > 0)
		return (ft_nbrlen(nb));
	else
		return (ft_nbrlen(nb) + 1);
}
