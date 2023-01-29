/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:25:25 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/29 14:21:11 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOWER_H

# define TOWER_H
# define SIZE 4

typedef struct s_params
{
	char	up_col[SIZE];
	char	down_col[SIZE];
	char	left_row[SIZE];
	char	right_row[SIZE];
}t_params;
int	is_arg_valid(char *av, t_params *params);
int	resolve(char matrix[SIZE][SIZE], t_params *params);
int	search_empty(char matrix[SIZE][SIZE], int *x, int *y);
int	can_put_value(char matrix[SIZE][SIZE], int x, int y, int value);
int	row_is_valid(char matrix[SIZE][SIZE], t_params *params, int y);
int	col_is_valid(char matrix[SIZE][SIZE], t_params *params, int x);
int	calculate_views(char matrix[SIZE][SIZE], int pos);
int	print_matrix(char matrix[SIZE][SIZE]);

#endif
