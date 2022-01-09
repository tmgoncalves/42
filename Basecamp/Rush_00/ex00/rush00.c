/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drebelo <drebelo@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 19:53:46 by drebelo           #+#    #+#             */
/*   Updated: 2020/11/23 00:29:46 by drebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	draw_line(int x)
{
	int counter;

	ft_putchar("o");
	counter = (x - 2);
	while (counter > 0)
	{
		ft_putchar("-");
		counter--;
	}
	if (x != 1)
	{
		ft_putchar("o");
		ft_putchar("\n");
	}
	else
		ft_putchar("\n");
}

void	draw_middle(int x, int y)
{
	int counter;
	int counterb;

	counter = (y - 2);
	while (counter > 0)
	{
		ft_putchar("|");
		counterb = (x - 2);
		while (counterb > 0)
		{
			ft_putchar(" ");
			counterb--;
		}
		if (x != 1)
		{
			ft_putchar("|");
			ft_putchar("\n");
		}
		else
		{
			ft_putchar("\n");
		}
		counter--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		draw_line(x);
		if (y != 1)
		{
			draw_middle(x, y);
			draw_line(x);
		}
	}
	else
	{
	}
}
