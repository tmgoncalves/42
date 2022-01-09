/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:26:04 by tmarinho          #+#    #+#             */
/*   Updated: 2020/11/26 17:17:13 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int a, int b, int c, int d);
void	loop_while(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	loop_while(a, b, c, d);
}

void	loop_while(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		b = a;
		while (b <= '9')
		{
			c = b;
			while (c <= '9')
			{
				d = c;
				while (d <= '9')
				{
					write_number(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	write_number(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '7' && d == '6'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
