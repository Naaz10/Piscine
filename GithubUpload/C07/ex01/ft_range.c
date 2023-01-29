/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:22:30 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/27 14:22:33 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
 int *p;
 int i;

 i = 0;
 if(min >= max)
    return 0;
    p = malloc(max - min);
    if(p == NULL)
      return 0;
while(min< max)
{
    p[i] = min;
    i++;
    min++;
}
}

int main(void)
{
    ft_range(1,3);
    return (0);
}
