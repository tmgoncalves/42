/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:20:13 by tmarinho          #+#    #+#             */
/*   Updated: 2020/12/04 22:00:23 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int resultado;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		resultado = nb * ft_recursive_power(nb, (power - 1));
	}
	return (resultado);
}
