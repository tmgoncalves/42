/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:37:08 by tmarinho          #+#    #+#             */
/*   Updated: 2020/12/04 22:02:45 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int contador;
	int resultado;

	contador = 1;
	resultado = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (resultado <= nb && contador <= 46341)
	{
		contador++;
		resultado = contador * contador;
	}
	if (nb == (contador - 1) * (contador - 1))
		return (contador - 1);
	return (0);
}
