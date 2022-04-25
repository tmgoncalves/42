/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:24:30 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/21 23:32:46 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_image		img;

	if (argc < 2)
	{
		ft_parameter_message();
		exit(1);
	}
	else
	{
		img.title = argv[1];
		ft_pointers(&img);
		ft_init(argc, argv, &img);
	}
	mlx_hook(img.win.win, ON_DESTROY, 1L << 0, &ft_reset_image, &img);
	mlx_hook(img.win.win, KEYPRES, 1L << 0, &ft_exit_program, &img);
	mlx_mouse_hook(img.win.win, ft_zoom, &img);
	mlx_expose_hook(img.win.win, &ft_choose_fractol, &img);
	mlx_loop(img.win.mlx);
	free(img.win.mlx);
}
