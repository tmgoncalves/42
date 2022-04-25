/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:22:42 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/17 23:26:14 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_get_color(int t)
{
	int	r;
	int	g;
	int	b;

	r = (int)(9 * (1 - t / MAX_ITER) * pow(t / MAX_ITER, 3) * 150);
	g = (int)(15 * pow((1 - t / MAX_ITER), 2) * pow(t / MAX_ITER, 2) * 255);
	b = (int)(8.5 * pow((1 - t / MAX_ITER), 3) * t / MAX_ITER * 80);
	return ((int)t << 24 | r << 16 | g << 8 | b);
}
