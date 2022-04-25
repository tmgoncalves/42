/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:40:12 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/17 23:39:48 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_zoom_update(t_image *img, t_scale scale, int zoom_in)
{
	if (zoom_in)
	{
		scale.delta_x2 = ((0.95) * scale.delta_x2) - scale.delta_x2;
		scale.delta_y2 = ((0.95) * scale.delta_y2) - scale.delta_y2;
	}
	else
	{
		scale.delta_x2 = (1.05 * scale.delta_x2) - scale.delta_x2;
		scale.delta_y2 = (1.05 * scale.delta_y2) - scale.delta_y2;
	}
	img->min.re -= (scale.delta_x2 * scale.x_ratio);
	img->max.re += (scale.delta_x2 * (1.0 - scale.x_ratio));
	img->max.im += (scale.delta_y2 * scale.y_ratio);
	img->min.im -= (scale.delta_y2 * (1.0 - scale.y_ratio));
	img->factor.re = (img->max.re - img->min.re) / (WIDTH - 1);
	img->factor.im = (img->max.im - img->min.im) / (HEIGHT - 1);
}

int	ft_zoom(int button, int x, int y, t_image *img)
{
	t_scale	scale;

	scale.x_ratio = (double)x / WIDTH;
	scale.y_ratio = (double)y / HEIGHT;
	scale.delta_x2 = img->max.re - img->min.re;
	scale.delta_y2 = img->max.im - img->min.im;
	img->x = 0;
	img->y = 0;
	if (button == SCROLL_UP)
		ft_zoom_update(img, scale, 1);
	if (button == SCROLL_DOWN)
		ft_zoom_update(img, scale, 0);
	ft_choose_fractol(img);
	return (1);
}
