/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:09:10 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/01 11:57:04 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	prod;

	prod = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (prod * ft_recursive_power(nb, power - 1));
}
