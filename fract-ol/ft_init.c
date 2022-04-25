/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 00:51:20 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/22 04:22:03 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init(int argc, char **argv, t_image *img)
{
	if (!ft_strcmp(img->title, "mandelbrot"))
		img->fractol = MANDELBROT;
	else if (!ft_strcmp(img->title, "julia"))
	{
		if (argc != 4)
		{
			ft_julia_message();
			ft_init_std_julia(img);
		}
		else
		{
			img->ju.re = ft_atof(argv[2]);
			img->ju.im = ft_atof(argv[3]);
		}
		img->fractol = JULIA;
	}
	else
	{
		ft_parameter_message();
		ft_reset_image(img);
	}
	ft_create_image(img, WIDTH, HEIGHT);
	ft_scale(img);
	ft_choose_fractol(img);
}
