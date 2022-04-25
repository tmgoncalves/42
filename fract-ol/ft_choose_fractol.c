/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose_fractol.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:55:42 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/14 20:31:15 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_choose_fractol(t_image *img)
{
	if (img->win.win == NULL)
		return (1);
	if (img->fractol == MANDELBROT)
		ft_mandelbrot(img);
	if (img->fractol == JULIA)
		ft_julia(img);
	mlx_put_image_to_window(img->win.mlx, img->win.win, img->ptr, 0, 0);
	return (0);
}
