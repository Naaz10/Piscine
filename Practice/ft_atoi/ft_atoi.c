/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:45:12 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/07 14:45:14 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
  int i = 0;
  int res = 0;
  int sign = 1;
  while((str[i] && str[i]>= '\t' && str[i]<='\r') || str[i] == ' ')
    i++;
    if(str[i] == '+')
    i++;
    else if(str[i] == '-'){
        sign *= -1;
        i++;
    }
    while(str[i] && str[i]>= '0' && str[i]<='9')
    {
    res = str[i] - '0' + res*10;
    i++;
    }

   return res*sign; 
}

int main(void)
{
    printf("%d\n",ft_atoi("     10"));
    printf("%d", atoi("     10"));
    return (0);
}