/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typeconversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:02:06 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/17 20:42:07 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_typeconversion(va_list Valist, char letter)
{
	size_t	counter;
	t_types	types;

	counter = 0;
	if (letter == 'c')
		counter = ft_putchar(types.character = va_arg(Valist, int));
	else if (letter == 's')
		counter = ft_putstr(types.str = va_arg(Valist, char *));
	else if (letter == 'p')
		counter = ft_p_ptr(types.ptr = va_arg(Valist, size_t));
	else if (letter == 'd' || letter == 'i')
		counter = ft_p_integer(types.intdec = va_arg(Valist, int));
	else if (letter == 'u')
		counter = ft_p_unsignedint(types.u_dec = va_arg(Valist, unsigned int));
	else if (letter == 'x' || letter == 'X')
		counter = ft_h_dec(types.h_dec = va_arg(Valist, unsigned int), letter);
	else if (letter == '%')
		counter = ft_putchar(letter);
	return (counter);
}
