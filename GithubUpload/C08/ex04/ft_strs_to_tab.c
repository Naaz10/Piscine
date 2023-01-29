/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:50:27 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/29 19:50:29 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
    char **strings = (char**)malloc(ac * sizeof(char*));
    char *element;
    int i  = 0;
    int j;
    t_stock_str *t;
    while (i < ac)
    {
        //strings[i] = (char*)malloc(50 * sizeof(char));
        j = 0;
        strings[i] = av[i];
        while (strings[i] != NULL)
        {
            j++;
        }
        
        t->size = j;
        t->str  = strings[i];
        t->copy = strings[i];
        i++;
    }
    free(strings);
    if(t == NULL)
        return NULL;
    return t;
}

int main(void)
{
    
    char *av[] = {"Hello", "Naaz"};
    ft_strs_to_tab(2, av);
    return (0);
}
