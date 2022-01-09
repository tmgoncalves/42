/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 20:22:51 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/06 15:01:05 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	iterator;

	iterator = 0;
	while (s[iterator] != '\0')
	{
		write(fd, &s[iterator], 1);
		iterator++;
	}
	write(fd, "\n", 1);
}
