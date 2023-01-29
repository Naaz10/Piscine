/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:13:10 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/21 21:04:15 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include <unistd.h>

void	ft_putchar(char c);

void	print(int i, int j, int y, int x)
{
	char	s;

	s = '\n';
	while (i <= x)
	{
		while (j <= y)
		{
			if ((i == 1 ) && (j == 1 || j==y))
				ft_putchar('A');
			else if ((i == x) &&(j == 1 || j == y))
				ft_putchar('C');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar(s);
		j = 1;
		i++;
	}	
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	print(i, j, x, y);
}
