/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:07:22 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/14 21:19:20 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static long int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *s)
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

size_t	ft_strlen(const char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		iterator++;
	}
	return (iterator);
}

double	ft_atof(const char *str)
{
	double	res;
	double	res2;
	char	*c;
	int		len;

	c = (char *)str;
	res = (double)ft_atoi(c);
	while (*c && *c != '.')
		c++;
	if (*c == '.')
		c++;
	res2 = (double)ft_atoi(c);
	len = ft_strlen(c);
	while (len--)
		res2 /= 10;
	if (res >= 0)
		return (res + res2);
	else
		return (res + -res2);
}
