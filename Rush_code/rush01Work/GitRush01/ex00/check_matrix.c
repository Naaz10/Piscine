/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:24:37 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/29 16:52:41 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "tower.h"

int	get_max_size(char matrix[SIZE][SIZE], int a, int b, int max_size)
{
	if (matrix[a][b] > max_size)
		max_size = matrix[a][b];
	return (max_size);
}

int	col_is_valid(char matrix[SIZE][SIZE], t_params *params, int x)
{
	int	i;
	int	max_size;
	int	views;

	i = -1;
	max_size = 0;
	views = 0;
	while (++i < SIZE)
	{
		views += matrix[i][x] > max_size;
		max_size = get_max_size(matrix, i, x, max_size);
	}
	if (views != params -> up_col[x])
		return (0);
	max_size = 0;
	views = 0;
	while (--i >= 0)
	{
		views += matrix[i][x] > max_size;
		max_size = get_max_size(matrix, i, x, max_size);
	}
	if (views != params -> right_row[x])
		return (0);
	return (1);
}

int	row_is_valid(char matrix[SIZE][SIZE], t_params *params, int y)
{
	int	i;
	int	max_size;
	int	views;

	i = -1;
	max_size = 0;
	views = 0;
	while (++i < SIZE)
	{
		views += matrix[y][i] > max_size;
		max_size = get_max_size(matrix, y, i, max_size);
	}
	if (views != params -> left_row[y])
		return (0);
	max_size = 0;
	views = 0;
	while (--i >= 0)
	{
		views += matrix[y][i] > max_size;
		max_size = get_max_size(matrix, y, i, max_size);
	}
	if (views != params -> right_row[y])
		return (0);
	return (1);
}

int	can_put_value(char matrix[SIZE][SIZE], int x, int y, int value)
{
	int	i;

	i = -1;
	while (++i < SIZE)
	{
		if (matrix[y][i] == value || matrix[i][x] == value)
			return (0);
	}
	return (1);
}

int	search_empty(char matrix[SIZE][SIZE], int *x, int *y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			if (matrix[i][j] == 0)
			{
				*x = j;
				*y = i;
				return (1);
			}
		}
	}
	return (0);
}
