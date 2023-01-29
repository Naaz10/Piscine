/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:57:39 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/05 20:07:39 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "num_header.h"

void	write_single(char digit, char *dict)
{
	int		i;
	int		d;
	char	dig_arr[2000];

	i = 0;
	d = 0;
	while (dict[d] != '\0')
	{
		if (if_single(digit, dict, d) == 1)
		{
			while (dict[d] != '\n')
			{
				if (dict[d] != ' ' && dict[d] != ':'
					&& !(dict[d] >= '0' && dict[d] <= '9'))
				{
					dig_arr[i] = dict[d];
					i++;
				}
				d++;
			}
			dig_arr[i] = '\0';
		}
		d++;
	}
	print_str(dig_arr);
}

void	write_double(char digit, char *dict)
{
	int		i;
	int		d;
	char	dig_arr[2000];

	i = 0;
	d = 0;
	while (dict[d] != '\0')
	{
		if (if_double(digit, dict, d) == 1)
		{
			while (dict[d] != '\n')
			{
				if (dict[d] != ' ' && dict[d] != ':'
					&& !(dict[d] >= '0' && dict[d] <= '9'))
				{
					dig_arr[i] = dict[d];
					i++;
				}
				d++;
			}
			dig_arr[i] = '\0';
		}
		d++;
	}
	print_str(dig_arr);
}

void	write_triple(char digit, char *dict)
{
	int		i;
	int		d;
	char	dig_arr[2000];

	i = 0;
	d = 0;
	while (dict[d] != '\0')
	{
		if (if_triple(digit, dict, d) == 1)
		{
			while (dict[d] != '\n')
			{
				if (dict[d] != ' ' && dict[d] != ':'
					&& !(dict[d] >= '0' && dict[d] <= '9'))
				{
					dig_arr[i] = dict[d];
					i++;
				}
				d++;
			}
			dig_arr[i] = '\0';
		}
		d++;
	}
	print_str(dig_arr);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
