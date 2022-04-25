/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coordinates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:08:51 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/11 20:43:38 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_coordinates(t_image *img)
{
	img->c.re = img->min.re + img->x * img->factor.re;
	img->z.re = img->c.re;
	img->z.im = img->c.im;
}
