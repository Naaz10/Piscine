/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:04:08 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/05 20:31:24 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "num_header.h"

char	*get_dict_file(int argc, char **argv)
{
	char	*file_name;
	char	*file_std;
	int		i;

	i = 0;
	file_std = "numbers.dict";
	file_name = (char *)malloc(100 * sizeof (char));
	if (argc == 2)
	{
		while (file_std[i] != '\0')
		{
			file_name[i] = file_std[i];
			i++;
		}
		file_name[i] = '\0';
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			file_name[i] = argv[1][i];
			i++;
		}
	}
	return (file_name);
}

char	*read_dict(char *file)
{
	int		open_dict;
	int		read_dict;
	int		i;
	char	*dict_a;
	char	*dict;

	i = 0;
	dict_a = (char *)malloc(2000 * sizeof (char));
	open_dict = open(file, O_RDONLY);
	if (open_dict < 0)
	{
		get_err();
		return (0);
	}
	read_dict = read(open_dict, dict_a, 2000);
	dict = (char *)malloc((read_dict + 1) * sizeof (char));
	while (i < read_dict)
	{
		dict[i] = dict_a[i];
		i++;
	}
	dict[i] = '\0';
	free(dict_a);
	close(open_dict);
	return (dict);
}

void	write_number(char *n, char *dict)
{
	int	i;
	int	len;
	int	div;

	i = 0;
	len = get_length(n);
	write_tri(n, len, dict);
	while (n[i] != '\0')
	{
		div = len / 3;
		i++;
	}
}

void	write_tri(char *n, int len, char *dict)
{
	int	i;
	int	mod;

	i = 0;
	mod = 0;
	if (ft_strcmp(n, "100000") == '0')
		print_str("One hundred thousand");
	else
	{
		write_tri_ext(n, dict, len, mod);
	}
}

void	write_tri_ext(char *n, char *dict, int len, int mod)
{
	int	i;

	i = 0;
	while (n[i] != '\0')
	{
		mod = len % 3;
		if (mod == 2 && n[i] == '1')
		{
			write_triple(n[i], dict);
			break ;
		}
		else if (mod == 2 && n[i] != '1' && n[i + 1] != '0')
		{
			write_double(n[i], dict);
			write(1, " ", 1);
		}
		else if (mod == 1)
			write_single(n[i], dict);
		i++;
		len--;
	}
}
