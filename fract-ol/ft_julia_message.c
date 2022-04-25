/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 02:16:03 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/22 04:22:25 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_julia_message(void)
{
	ft_text("\n\n");
	ft_text("Hey Human !!\n\n");
	ft_text("If you want to see others images of Julia Set Program, ");
	ft_text("you have to insert the real and imaginary value. For example:\n\n");
	ft_text("./fractol julia 0.285 0.01\n\n");
	ft_text("./fractol julia -0.4 0.6\n\n");
	ft_text("./fractol julia -1.476 0\n\n");
	ft_text("./fractol julia -1 0.2\n\n");
	ft_text("./fractol julia -0.1 0.651\n\n");
	return (0);
}
