/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:22:56 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/27 14:23:02 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *p;
    int i;

    i = 0;
    if(min >= max)
        return (0);
    p = malloc(max - min) ;
    if( p == NULL) return (0);
    while (min < max) {
        p[i] = min;
        i++;
        min++;
    }  
    return (p);
}
int ft_ultimate_range(int **range, int min, int max)
{
    *range = ft_range(min, max);
    if(*range == NULL)
        return (0);
    return (max - min);
}

int main(void)
{
    int **range;
    ft_ultimate_range(range,1,3);
    return (0);
}