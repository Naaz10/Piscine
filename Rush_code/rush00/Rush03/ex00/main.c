/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:12:29 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/21 19:39:49 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char** argv)
{
	char *a = argv[1];
	char *b = argv[2];	
	int col =  atoi(a);
	int row = atoi(b);
	rush (col, row);
	return (0);
}
