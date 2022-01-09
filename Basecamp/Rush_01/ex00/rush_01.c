/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:08:25 by tmarinho          #+#    #+#             */
/*   Updated: 2020/11/29 22:29:34 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	condition_02(int linha, int coluna, int *arr);

void	rush_01(void)
{
	int linha;
	int coluna;
	int i;
	int j;
	int counter;
	int *arr;

	linha = 4;
	coluna = 4;
	i = 0;
	j = 0;
	counter = 0;
	arr = (int *)malloc(linha * coluna * sizeof(int));
	while (i < linha)
	{
		j = 0;
		while (j < coluna)
		{
			if (i == 0 && j == 0)
			{
				*(arr + i * coluna + j) = 1;
			}
			else if (i + j < 4)
			{
				*(arr + i * coluna + j) = i + j + 1;
			}
			else
			{
				counter++;
				if (counter == 4 || counter == 2 || counter == 1)
				{
					*(arr + i * coluna + j) = 1;
				}
				else if (counter == 5 || counter == 3)
				{
					*(arr + i * coluna + j) = 2;
				}
				else
				{
					*(arr + i * coluna + j) = 3;
				}
			}
			j++;
		}
		i++;
	}
	condition_02(linha, coluna, arr);
	free(arr);
}

void	condition_02(int linha, int coluna, int *arr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < linha)
	{
		j = 0;
		while (j < coluna)
		{
			printf("%d ", *(arr + i * coluna + j));
			j++;
		}
		i++;
		printf("\n");
	}
}
