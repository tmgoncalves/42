/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parameter_message.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:25:55 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/22 17:31:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_parameter_message(void)
{
	ft_text("\n\n");
	ft_text("Hey Human !!\n\n");
	ft_text("If you want to enter the Fractol Programm, you have to write");
	ft_text(" the command ./fractol + Fractol's name.\n\n");
	ft_text("There are two Fractol's options: mandelbrot and julia.\n\n");
	ft_text("To access Mandelbrot, the command is: ./fractol mandelbrot\n\n");
	ft_text("To access Julia, the command is ./fractol julia ");
	ft_text("+ real value and imaginary value coordinates. For example:\n\n");
	ft_text("./fractol julia -1.45 0\n\n");
	ft_text("**** YOU HAVE TO INPUT ONLY NUMBERS AS PARAMETERS !! ****\n\n\n");
	ft_text("If you write only the command ./fractol julia, the program will ");
	ft_text("open using a standard image of Julia.\n\n\n");
	return (1);
}
