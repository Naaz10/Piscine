/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:21:27 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/30 14:45:39 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	word_ctr;
	int	sen_ctr;

	word_ctr = 0;
	sen_ctr = 0;
	while (str[sen_ctr] != '\0')
	{
		if (word_ctr == 0 && str[sen_ctr] >= 'a' && str[sen_ctr] <= 'z')
		{
			str[sen_ctr] -= 'a' - 'A';
			word_ctr++;
		}
		else if (word_ctr > 0 && str[sen_ctr] >= 'A' && str[sen_ctr] <= 'Z')
		{
			str[sen_ctr] += 'a' - 'A';
		}
		else if (str[sen_ctr] < '0' || (str[sen_ctr] > '9'
				&& str[sen_ctr] < 'A') || (str[sen_ctr] > 'Z'
				&& str[sen_ctr] < 'a') || str[sen_ctr] > 'z')
			word_ctr = 0;
		else
			word_ctr++;
		sen_ctr++;
	}
	return (str);
}
