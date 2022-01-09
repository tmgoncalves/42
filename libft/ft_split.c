/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:26:59 by tmarinho          #+#    #+#             */
/*   Updated: 2021/03/14 19:35:13 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		counter_words(char *s, char c)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			i++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (i);
}

static int		ft_wordlen(char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static void		*ft_free(char **tab, int i)
{
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	int		num_words;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	num_words = counter_words((char *)s, c);
	if (!(tab = (char **)malloc((num_words + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (num_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_substr((char *)s, 0, ft_wordlen((char *)s, c));
		if (!tab[i])
			return (ft_free(tab, i));
		s = s + ft_wordlen((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
