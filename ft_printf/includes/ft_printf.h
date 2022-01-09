/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 19:35:38 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/19 20:21:16 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_types
{
	int				character;
	char			*str;
	size_t			ptr;
	int				intdec;
	unsigned int	u_dec;
	unsigned int	h_dec;
}	t_types;

int		ft_putstr(char *str);
size_t	ft_putnbr(int nb);
int		ft_putchar(char c);
char	*ft_strchr(const char *str, int ch);
void	*ft_memset(void *v, int c, size_t n);
void	*ft_calloc(size_t num, size_t size);
size_t	ft_h_dec(unsigned int hex, char ch);
int		ft_p_integer(int i);
size_t	ft_p_ptr(size_t hex);
size_t	ft_p_unsignedint(unsigned int i);
int		ft_printf(const char *fmt, ...);
int		ft_putstr(char *str);
size_t	ft_typeconversion(va_list Valist, char letter);
#endif
