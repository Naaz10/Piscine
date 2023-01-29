/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:14:52 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/01 15:43:52 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	compare_string(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	sort(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	compare_and_print(int arr[], int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (compare_string(argv[arr[i]], argv[arr[j]]) > 0)
			{
				sort(&arr[i], &arr[j]);
			}
			j++;
		}
		print_str(argv[arr[i++]]);
	}
}

int	main(int argc, char **argv)
{
	int	count;
	int	arr[100];

	count = 1;
	while (count < argc)
	{
		arr[count] = count;
		count++;
	}
	compare_and_print(arr, argc, argv);
	return (0);
}
