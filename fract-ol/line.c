#include "mlx.h"
#include <stdio.h>

typedef struct	s_data{
	void	*img;
	char	*addr;
	int	bits_per_pixel;
	int	line_length;
	int	endian;
}	t_data;

typedef struct	s_window
{
	void	*mlx;
	void	*ptr;
}	t_window;

void	create_image(t_data *img, void *mlx, int width, int height)
{
	img->img = mlx_new_image(mlx, width, height);
	img->addr = mlx_get_data_addr(img->img, &img->bits_per_pixel, &img->line_length, &img->endian);

}


void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x *(data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void	line_h(t_data *img, int x, int size)
{
	while(size != 0)
	{
		my_mlx_pixel_put(img, x, 200, 0x00FF0000);
		x++;
		size--;
	}
}

void	line_v(t_data *img, int y, int size)
{
	while(size != 0)
	{
		my_mlx_pixel_put(img, 200, y, 0x00FF0000);
		y++;
		size--;
	}
}

int	key_hook(int keycode, t_data *vars)
{
	(void)vars;
	printf("%i\n", keycode);
	return 0;
}



int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	int	width;
	int	height;
	t_data	img;

	width = 400;
	height = 400;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, width, height, "Tela de Teste");
	img.img = mlx_new_image(mlx, width, width);

	/*
	 * * After creating an image, we can call mlx_get_data_addr, we pass
	 * bits_per_pixel, line_length, and endian by reference. These will
	 * then be set accordingly for the *current* data address.
	 */

	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	line_h(&img,  0, 400);
	line_v(&img, 0, 400);
	//line_h(&img, 200, 100);
	//my_mlx_pixel_put(&img, 200, 200, 0x00FF0000);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_key_hook(mlx_win, key_hook, &img);
	mlx_loop(mlx);
}
