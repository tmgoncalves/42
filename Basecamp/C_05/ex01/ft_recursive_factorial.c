/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:50:38 by tmarinho          #+#    #+#             */
/*   Updated: 2020/12/04 21:56:55 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int resultado;

	if (nb < 0)
		return (0);
	if ((nb == 0) || nb == 1)
		return (1);
	else
	{
		resultado = nb * ft_recursive_factorial(nb - 1);
		return (resultado);
	}
}
