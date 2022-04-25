/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_image.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:34:16 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/21 23:33:55 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_reset_image(t_image *img)
{
	if (img->ptr)
		mlx_destroy_image(img->win.mlx, img->ptr);
	if (img->win.win)
		mlx_destroy_window(img->win.mlx, img->win.win);
	if (img->win.mlx)
	{
		mlx_destroy_display(img->win.mlx);
		free(img->win.mlx);
	}
	exit(1);
}
