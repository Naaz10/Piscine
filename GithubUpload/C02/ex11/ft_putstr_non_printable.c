/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:45:43 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/31 10:58:11 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write (1, &c, 1);
}

void	create_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		create_hex(n / 10);
		create_hex(n % 10);
	}
	else
		print_char(hex[n]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print_char('\\');
			if (str[i] < 16)
				print_char('0');
			create_hex(str[i]);
		}
		else
		{
			print_char(str[i]);
		}
		i++;
	}
}
