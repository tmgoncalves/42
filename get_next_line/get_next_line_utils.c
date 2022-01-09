/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:44:37 by tmarinho          #+#    #+#             */
/*   Updated: 2021/04/09 18:55:17 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	iterator;

	iterator = 0;
	if (str == NULL)
		return (0);
	while (str[iterator] != '\0')
	{
		iterator++;
	}
	return (iterator);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;
	size_t		i;

	new_dest = (char *)dest;
	new_src = (const char *)src;
	if (new_dest == NULL && new_src == NULL)
		return (NULL);
	i = 0;
	if (new_dest > new_src)
	{
		i = n;
		while (i > 0)
		{
			new_dest[i - 1] = new_src[i - 1];
			i--;
		}
	}
	else
		while (i < n)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	char	*ptr;

	if (s1 == NULL && s2 == NULL)
		return (0);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	total_len = s1_len + s2_len + 1;
	ptr = malloc(sizeof(char) * total_len);
	if (ptr == NULL)
		return (0);
	ft_memmove(ptr, s1, s1_len);
	ft_memmove(ptr + s1_len, s2, s2_len);
	ptr[total_len - 1] = '\0';
	free((char *)s1);
	return (ptr);
}

int		n_return(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
