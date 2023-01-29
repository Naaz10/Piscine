/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:13:10 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/22 19:12:50 by nafrin           ###   ########.fr       */
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
			if (i == 1 && j == 1)
				ft_putchar('/');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
			else if ((i == 1 && j == y) || (i == x && j == 1))
				ft_putchar('\\');
			else if (i == x && j == y)
				ft_putchar('/');
			else
				ft_putchar('*');
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
	if (x < 1 || y < 1)
		return ;
	print(i, j, x, y);
}