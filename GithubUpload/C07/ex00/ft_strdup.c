/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:21:03 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/27 14:21:09 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int get_length(char *src)
{
    int i =0;
    while(src[i] != '\0')
    i++;
    return i;
}
char *create_copy(char *dest, char *src)
{   
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] == src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char    *ft_strdup(char *src)
{
    char *dest;

    dest = malloc((get_length(src)+1) *sizeof(char));
    return (dest ? create_copy(dest,src) :dest);
}