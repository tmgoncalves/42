/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:45:16 by tmarinho          #+#    #+#             */
/*   Updated: 2021/08/17 23:24:29 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*tmp;

	tmp = malloc(num * size);
	if (tmp != NULL)
		ft_memset(tmp, '\0', num * size);
	return (tmp);
}
