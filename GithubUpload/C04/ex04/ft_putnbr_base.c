/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:24:49 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/31 20:28:38 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base_repeat(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = (-1) * nbr;
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_repeat(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	is_valid_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (is_valid_base(base) == 1)
	{
		while (base[i] != '\0')
			i++;
	}
	ft_putnbr_base_repeat(nbr, base, i);
}
