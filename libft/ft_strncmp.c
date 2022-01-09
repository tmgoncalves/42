/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 04:44:11 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/07 17:09:00 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*new_s1;
	unsigned char	*new_s2;
	size_t			i;

	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (new_s1[i] == new_s2[i] && new_s1[i] != '\0' && \
			new_s2[i] != '\0' && i < n - 1)
		i++;
	return (new_s1[i] - new_s2[i]);
}
