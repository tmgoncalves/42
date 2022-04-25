SRC	=	line.c

CC	=	clang

CFLAGS	=	-Wall -Wextra -Werror

MLX	=	../mlx_linux/

MFLAGS	=	-lmlx_Linux -lXext -lX11

all:
	${CC} ${CFLAGS} ${SRC} -I ${MLX} -L ${MLX} ${MFLAGS}
