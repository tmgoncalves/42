/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_program.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:41:47 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/17 23:08:15 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_exit_program(int keysym, t_image *img)
{
	if (keysym == ESC_KEY)
		ft_reset_image(img);
	return (0);
}
