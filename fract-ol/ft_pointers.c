/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:34:21 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/20 03:44:16 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_pointers(t_image *img)
{
	img->win.mlx = NULL;
	img->win.win = NULL;
	img->ptr = NULL;
	img->addr = NULL;
	img->x = 0;
	img->y = 0;
}
