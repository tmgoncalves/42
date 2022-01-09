/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 21:47:09 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/17 20:42:48 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	size_t	counter;
	va_list	Valist;

	counter = 0;
	va_start(Valist, fmt);
	while (*fmt)
	{
		if (*fmt == '%' && ft_strchr("cspdiuxX%", *(fmt + 1)))
			counter += ft_typeconversion(Valist, *++fmt);
		else
			counter += write(1, &(*fmt), 1);
		fmt++;
	}
	return (counter);
}
