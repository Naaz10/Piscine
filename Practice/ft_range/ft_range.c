/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:06:25 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/06 18:06:27 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int get_abs(int n)
{
    if(n < 0)
        return (-1*n);
    return n;    
}
int *ft_rannge(int min, int max)
{
    int *p;
    int size;
    int i =0;
    size = get_abs(max - min) + 1;
    p = (int *)malloc(size * sizeof(int));
    if(!p)
        return 0;
    if(size == 1)
    p[0] = min;    
    if(min < max)
    {
        while (i < size)
        {
            
        p[i] = min + i;
        i++;
        }
        
    }
    else if(min > max)
    {
        while (i < size)
        {           
            p[i] = min - i;
            i++;
        }        
    }
    return p;
}

int main(void)
{
    int *p;
    int size = 4;
    int i = 0;
    p = ft_rannge(-1,2);
    while(i < size)
    {
        printf("%d\n",p[i]);
        i++;
    }
    return 0;
}