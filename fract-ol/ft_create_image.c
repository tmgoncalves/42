/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:17:14 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/17 23:07:37 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_create_image(t_image *img, int width, int height)
{
	img->win.mlx = mlx_init();
	if (!img->win.mlx)
	{
		mlx_destroy_display(img->win.mlx);
		free(img->win.mlx);
	}
	img->win.win = mlx_new_window(img->win.mlx, width, height, img->title);
	if (!img->win.mlx)
		free(img->win.mlx);
	img->ptr = mlx_new_image(img->win.mlx, width, height);
	if (!img->ptr)
		mlx_destroy_image(img->ptr, img->win.mlx);
	img->addr = mlx_get_data_addr(img->ptr,
			&img->bpp, &img->line_len, &img->endian);
	if (!img->addr)
		mlx_destroy_image(img->ptr, img->win.mlx);
}
