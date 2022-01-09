# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/12 18:54:51 by tmarinho          #+#    #+#              #
#    Updated: 2021/08/21 10:53:52 by tmarinho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC =	clang

CFLAGS	= -Wall -Wextra -Werror

SRC = src/ft_h_dec.c \
	src/ft_calloc.c \
	src/ft_memset.c \
	src/ft_putchar.c \
	src/ft_putnbr.c \
	src/ft_p_integer.c \
	src/ft_p_ptr.c \
	src/ft_p_unsignedint.c \
	src/ft_putstr.c \
	src/ft_strchr.c \
	src/ft_typeconversion.c \
	ft_printf.c

INC = includes/ft_printf.h

OBJ = $(SRC:.c=.o)

$(NAME): $(INC) $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ) a.out

fclean: clean
	rm -f $(NAME)
	rm -f *.o

re: fclean all

.PHONY: all clean fclean re
