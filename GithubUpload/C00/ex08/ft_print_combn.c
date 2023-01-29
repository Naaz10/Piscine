/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:23:09 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/25 18:37:06 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	put_value(int value[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		print_char(value[i] + '0');
		i++;
	}
}

int	fetch_index(int number[], int size)
{
	int	i;
	int	max;

	i = 0;
	max = 10 - size;
	while (i < size)
	{
		if (number[i] == max)
			return (i - 1);
		if (i == size - 1 && number[i] < max)
			return (i);
		i++;
		max++;
	}
	return (-1);
}

void	increment_number(int num[], int size, int index)
{
	int	i;

	i = index + 1;
	num[index]++;
	while (i <= size)
	{
		num[i] = num[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	num[10];
	int	i;
	int	index;

	if (n > 9 || n < 1)
	{
		return ;
	}
	else
	{
		i = 0;
		while (i < n)
		{
			num[i] = i;
			i++;
		}
		while (fetch_index(num, n) != -1)
		{
			index = fetch_index(num, n);
			put_value(num, n);
			increment_number(num, n, index);
			write(1, ", ", 2);
		}
		put_value(num, n);
	}
}
