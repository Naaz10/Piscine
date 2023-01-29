/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:59:22 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/31 16:31:45 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	flag;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			flag = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					flag = 1;
				i++;
			}
			if (flag == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
