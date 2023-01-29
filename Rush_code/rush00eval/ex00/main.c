/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:12:29 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/22 19:26:14 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	char	*a;
	char	*b;
	int		col;
	int		row;

	(void)argc;
	a = argv[1];
	b = argv[2];
	col = atoi(a);
	row = atoi(b);
	rush (col, row);
	return (0);
}
