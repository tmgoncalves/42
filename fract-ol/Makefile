# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 15:24:51 by tmarinho          #+#    #+#              #
#    Updated: 2022/04/22 17:22:13 by tmarinho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	fractol

SRC =	main.c \
		ft_create_image.c \
		ft_pixel.c \
		ft_mandelbrot.c \
		ft_get_color.c \
		ft_scale.c \
		ft_coordinates.c \
		ft_strcmp.c \
		ft_init.c \
		ft_julia.c \
		ft_reset_image.c \
		ft_choose_fractol.c \
		ft_init_std_julia.c \
		ft_atof.c \
		ft_exit_program.c \
		ft_zoom.c \
		ft_putchar.c \
		ft_text.c \
		ft_parameter_message.c \
		ft_julia_message.c \
		ft_pointers.c \

CC =	gcc

CFLAGS =	-Wall -Wextra -Werror

OBJ =	$(SRC:.c=.o)

MLX =	./minilibx-linux

MFLAGS =	-lmlx_Linux -lXext -lX11 -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C minilibx-linux
	${CC} ${CFLAGS} ${SRC} minilibx-linux/libmlx.a -I ${MLX} -L ${MLX} ${MFLAGS} -o $(NAME)

clean:
		@rm -f $(OBJ)
		make clean -C minilibx-linux

fclean:
		@rm -f $(NAME)
		@rm -f $(OBJ) $(NAME)

re: fclean all
