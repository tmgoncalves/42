/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:55:26 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/22 00:36:56 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_julia(t_image *img)
{
	while (img->y < HEIGHT)
	{
		img->c.im = img->max.im - img->y * img->factor.im;
		img->x = 0;
		while (img->x < WIDTH)
		{
			ft_coordinates(img);
			img->is_inside = true;
			img->fract_iter = 0;
			while (img->fract_iter < MAX_ITER)
			{
				img->m.module = pow(img->z.re, 2.0) - pow(img->z.im, 2.0);
				img->z.module = pow(img->z.re, 2.0) + pow(img->z.im, 2.0);
				if (img->z.module > 4 && img->is_inside != false)
					break ;
				img->z.im = 2 * img->z.re * img->z.im + img->ju.im;
				img->z.re = img->m.module + img->ju.re;
				++img->fract_iter;
			}
			if (img->is_inside)
				ft_pixel(img, img->x, img->y, ft_get_color(img->fract_iter));
			++img->x;
		}
		++img->y;
	}
}
