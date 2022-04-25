/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scale.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:34:28 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/22 02:57:14 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_scale(t_image *img)
{
	if (img->fractol == MANDELBROT)
	{
		img->min.re = -2.0;
		img->min.im = -1.8;
		img->max.re = 1.5;
	}
	else if (img->fractol == JULIA)
	{
		img->min.re = -2.0;
		img->min.im = -2.0;
		img->max.re = 2.0;
	}
	img->max.im = img->min.im + (img->max.re - img->min.re) * HEIGHT / WIDTH;
	img->factor.re = (img->max.re - img->min.re) / (WIDTH - 1);
	img->factor.im = (img->max.im - img->min.im) / (HEIGHT - 1);
}
