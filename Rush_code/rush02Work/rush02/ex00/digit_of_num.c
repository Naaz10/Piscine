/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_of_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:28:35 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/05 16:28:36 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num_header.h"

int if_single(char digit, char *dict, int d)
{
    if(dict[d] == digit && !(dict[d + 1] >= '0' && dict[d + 1] <= '9')
        && !(dict[d - 1] >= '0' && dict[d - 1] <= '9'))
        return (1);
    else
        return (0);    
}

int if_double(char digit, char *dict, int d)
{
    if(dict[d] == digit && (dict[d + 1] == '0') 
    && !(dict[d + 2] >= '0' && dict[d + 2] <= '9')
    && !(dict[d - 1] >= '0' && dict[d - 1] <= '9'))
        return (1);
    else
        return (0);
}

int if_triple(char digit, char *dict, int d)
{
    if (dict[d] == digit && dict[d] == '1' 
    && (dict[d + 1] >= '0' && dict[d + 1] <='9')
    && !(dict[d + 2] >= '0' && dict[d + 2] <='9')
    && !(dict[d - 1] >= '0' && dict[d - 1] <='9'))
        return (1);
    else
        return (0);    
}