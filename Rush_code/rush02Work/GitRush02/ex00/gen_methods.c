/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_methods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:43:47 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/05 20:44:33 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "num_header.h"

void	print_char(char ch)
{
	write(1, &ch, 1);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		print_char(str[i]);
		i++;
	}
}

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	atoi_1(char n)
{
	int	i;

	i = n - '0';
	return (i);
}

int	get_err(void)
{
	print_str("Error");
	return (0);
}
