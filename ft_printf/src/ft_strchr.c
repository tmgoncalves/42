/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 02:54:20 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/17 22:31:41 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != (char)ch)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}
