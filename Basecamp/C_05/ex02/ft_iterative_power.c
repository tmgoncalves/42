/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:20:13 by tmarinho          #+#    #+#             */
/*   Updated: 2020/12/04 21:58:53 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int iterator;
	int resultado;

	iterator = 0;
	resultado = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (iterator < power)
		{
			resultado = nb * resultado;
			iterator++;
		}
		return (resultado);
	}
}
