/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:18:10 by tmarinho          #+#    #+#             */
/*   Updated: 2022/04/22 02:51:50 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <math.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "minilibx-linux/mlx.h"

# define MAX_ITER 100
# define HEIGHT 800
# define WIDTH	800

# define MANDELBROT 0
# define JULIA 1

# define KEYPRES 2
# define ON_DESTROY 17
# define ESC_KEY 65307

# define SCROLL_UP 4
# define SCROLL_DOWN 5

typedef bool			t_boolean;

typedef struct s_window
{
	void	*mlx;
	void	*win;
}	t_window;

typedef struct s_complex
{
	double	re;
	double	im;
	double	module;
}	t_complex;

typedef struct s_image
{
	void			*ptr;
	char			*addr;
	int				width;
	int				height;
	int				bpp;
	int				line_len;
	int				endian;
	int				fract_iter;
	int				fractol;
	char			*title;
	t_boolean		is_inside;
	t_window		win;
	t_complex		z;
	t_complex		max;
	t_complex		min;
	t_complex		factor;
	t_complex		c;
	t_complex		k;
	t_complex		m;
	t_complex		ju;
	unsigned int	x;
	unsigned int	y;
}	t_image;

typedef struct s_scale
{
	double	x_ratio;
	double	y_ratio;
	double	delta_x;
	double	delta_y;
	double	delta_x2;
	double	delta_y2;
}			t_scale;

void			ft_create_image(t_image *img, int width, int height);
void			ft_mandelbrot(t_image *img);
void			ft_pixel(t_image *img, int x, int y, int color);
int				ft_encode_trgb(double t, int r, int g, int b);
int				ft_get_color(int t);
void			ft_scale(t_image *img);
void			ft_coordinates(t_image *img);
void			ft_init(int argc, char **argv, t_image *img);
int				ft_strcmp(char *s1, char *s2);
void			ft_julia(t_image *img);
int				ft_reset_image(t_image *img);
int				ft_choose_fractol(t_image *img);
void			ft_init_std_julia(t_image *img);
double			ft_atof(const char *str);
int				ft_exit_program(int keysym, t_image *img);
int				ft_zoom(int button, int x, int y, t_image *img);
int				ft_putchar(char c);
int				ft_text(char *string);
int				ft_parameter_message(void);
int				ft_julia_message(void);
void			ft_pointers(t_image *img);

#endif
