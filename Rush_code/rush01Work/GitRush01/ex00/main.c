/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:21:32 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/29 15:39:18 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "tower.h"

int	print_matrix(char matrix[SIZE][SIZE])
{
	int	y;
	int	x;
	int	*ptr;

	y = -1;
	ptr = malloc(SIZE);
	while (++y < SIZE)
	{
		x = -1;
		while (++x < SIZE)
		{
			write (1, &matrix[y][x], 1);
			if (x != SIZE - 1)
				write(1, " ", 1);
		}
		write (1, "\n", 1);
	}
	free(ptr);
	return (1);
}

int	resolve(char matrix[SIZE][SIZE], t_params *params)
{
	int	x;
	int	y;
	int	value;

	if (search_empty(matrix, &x, &y))
	{
		value = '0';
		while (++value <= (SIZE + '0'))
		{
			if (can_put_value(matrix, x, y, value))
			{
				matrix[y][x] = value;
				if (x == (SIZE - 1) && !row_is_valid(matrix, params, y))
					continue ;
				if (y == (SIZE - 1) && !col_is_valid(matrix, params, x))
					continue ;
				if (resolve(matrix, params) == 1)
					return (1);
			}
		}
		matrix[y][x] = 0;
		return (0);
	}
	return (1);
}

int	is_arg_length_valid(int i)
{
	if (SIZE == 4 && i != 31)
		return (0);
	if (SIZE == 5 && i != 39)
		return (0);
	if (SIZE == 6 && i != 47)
		return (0);
	if (SIZE == 7 && i != 55)
		return (0);
	if (SIZE == 8 && i != 63)
		return (0);
	if (SIZE == 9 && i != 71)
		return (0);
	return (1);
}

int	is_arg_valid(char *argv, t_params *params)
{
	int		i;
	char	*ptr_params;

	i = -1;
	ptr_params = &params -> up_col[0];
	while (argv[++i] != '\0')
	{
		if (i % 2 != 0 && argv[i] == ' ')
			continue ;
		if (i % 2 != 0 && argv[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(argv[i] >= '1' && argv[i] <= (SIZE + '0')))
			return (0);
		*ptr_params = argv[i] - '0';
		ptr_params++;
	}
	return (is_arg_length_valid(i));
}

int	main(int argc, char **argv)
{
	t_params	params;
	char		matrix[SIZE][SIZE];
	int			i;
	int			j;

	if (argc != 2 || !is_arg_valid(argv[1], &params))
	{
		write(1, "Error", 5);
		return (0);
	}	
	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
			matrix[i][j] = 0;
	}
	if (!resolve(matrix, &params))
	{
		write(1, "Error", 5);
		return (0);
	}
	print_matrix(matrix);
	return (1);
}
