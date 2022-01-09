/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 22:56:57 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/14 19:49:55 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *s)
{
	long int	i;
	long int	num;
	long int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (s[0] == '+' || s[0] == '-')
		i = 1;
	if (s[0] == '-')
		sign = -1;
	while (ft_isdigit(s[i]) == 1 && s[i] != '\0')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
