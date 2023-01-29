/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 11:50:22 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/05 19:40:20 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "num_header.h"

int	main(int argc, char **argv)
{
	char	*file_name;
	char	*num_dict;
	char	*n;

	file_name = 0;
	num_dict = 0;
	n = 0;
	if (verify_condition(argc, argv) >= 1)
	{
		file_name = get_dict_file(argc, argv);
		num_dict = read_dict(file_name);
		get_number(argc, argv, &n);
		write_number(n, num_dict);
		free_memory(file_name, num_dict, n);
	}
	else
		get_err();
	write(1, "\n", 1);
	return (0);
}
