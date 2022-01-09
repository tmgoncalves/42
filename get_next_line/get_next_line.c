/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:44:22 by tmarinho          #+#    #+#             */
/*   Updated: 2021/04/09 18:44:43 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_save(char *save)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (save == NULL)
		return (0);
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\0')
	{
		free(save);
		return (0);
	}
	if (!(ptr = malloc(sizeof(char) * ((ft_strlen(save) - i) + 1))))
		return (0);
	i++;
	while (save[i])
		ptr[j++] = save[i++];
	ptr[j] = '\0';
	free(save);
	return (ptr);
}

char	*get_line(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	if (str == '\0')
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (!(ptr = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int		get_next_line(int fd, char **line)
{
	char			*buffer;
	static char		*save;
	int				flag;

	flag = 1;
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (!n_return(save) && flag != 0)
	{
		if ((flag = read(fd, buffer, BUFFER_SIZE)) == -1)
		{
			free(buffer);
			return (-1);
		}
		buffer[flag] = '\0';
		save = ft_strjoin(save, buffer);
	}
	free(buffer);
	*line = get_line(save);
	save = get_save(save);
	if (flag == 0)
		return (0);
	return (1);
}
