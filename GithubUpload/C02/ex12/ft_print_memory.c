/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:47:45 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/31 11:08:51 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(int ch)
{
	write(1, &ch, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		put_char(&addr[i]);
		i++;
	}
	return (addr);
}
