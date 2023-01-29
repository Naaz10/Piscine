/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:23:28 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/27 14:23:29 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep){
    int k;
    int i;
    int j;
    char *s;

    k = 0;
    i = 0;
    while(i < size)
    {
        j = 0;
        while(strs[i][j] != '\0')
        {
            s[k++] = strs[i][j++];
            
        }
        j = 0;
        while (sep[j] != '\0' && i != size-1)
            s[k++] = sep[j++];
        i++;
        s[k] ='\0';
        return (s);
    }

}

int main(void)
{
    char **strs = "Hello Naaz How are you";
    char *sep = " ";
    ft_strjoin(5, strs, sep);
    return (0);
}