#include "mlx.h"

typedef struct	s_data{
	void	*img;
	char	*addr;
	int	width;
	int	height;
	int	bits_per_pixel;
	int	line_length;
	int	endian;
}	t_data;

typedef int	t_rgb;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x *(data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void	draw_square(t_data *img, int side, t_rgb color)
{
	int	x;
	int	y;

	x = (img->width - side) / 2;
	y = (img->height - side) / 2;
	while(y <= (img->height + side) / 2)
	{
		while(x <= (img->width + side) / 2)
		{
			my_mlx_pixel_put(img, x, y, color);
			x++;
		}
		y++;
		x = (img->width -side) / 2;
	}
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 400, 400, "Tela de Teste");
	img.img = mlx_new_image(mlx, 400, 400);

	/*
	 * * After creating an image, we can call mlx_get_data_addr, we pass
	 * bits_per_pixel, line_length, and endian by reference. These will
	 * then be set accordingly for the *current* data address.
	 */

	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	draw_square(&img, 10, 0x00FF0000);
	//my_mlx_pixel_put(&img, 200, 200, 0x00FF0000);
	//mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
