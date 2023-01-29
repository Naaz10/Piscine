/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:47:30 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/31 20:56:28 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1]
			|| base[i] == ' ' || base[i] == '\n' || base[i] == '\t'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	multiply_nbr(char c, char *base, int mul, int nbr)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (nbr + (mul * i));
		i++;
	}
	return (nbr);
}

int	is_valid_base(char x, char *base)
{
	int	i;

	i = 0;
	if (x == '\n' || x == '\t' || x == '\v' || x == '\f'
		|| x == '\r' || x == ' ' || x == '+' || x == '-')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == x)
			return (2);
		i++;
	}
	return (0);
}

int	atoi_n(char *str, char *base, int size, int start)
{
	int	i;
	int	s;
	int	res;
	int	mul;

	i = start - 1;
	s = 1;
	res = 0;
	mul = 1;
	while (i >= 0)
	{
		if (str[i] == '-')
			s *= (-1);
		if (is_valid_base(str[i], base) == 2)
		{
			res = multiply_nbr(str[i], base, mul, res);
			mul *= size;
		}
		i--;
	}
	return (res * s);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	if (verify_base(base) == 0)
		return (0);
	while (base[size] != '0')
		size++;
	while (str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (atoi_n(str, base, size, i));
}
