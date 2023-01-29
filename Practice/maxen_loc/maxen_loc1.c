/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxen_loc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:02:43 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/07 14:02:45 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int get_length(char *str)
{
    int i;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
void print_char(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        write(1, &*str, 1);
        i++;
    }
}
char *get_common(char *s1, char *s2)
{
    int i = 0;
    char *res;
    while(s1[i] != '\0' || s2[i] != '\0')
    {
        if(s1[i] == s2[i])
        {
            res[i] = s1[i];
            i++;
        }
        else
            break;
    }
    return res;
}

char *find_common(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *common;
    char *temp;
    char *curr;
    int max = 0;
    int size;
    while(s1[i] != '\0')
    {
        
        while (s2[j] != '\0')
        {
            if(s1[i] == s2[j])
            {
                temp = get_common(&s1,&s2);
                
                size = get_length(temp);
                if(size>max)
                {   curr = temp;
                    max = size;
                }
                i+=size;
                j+=size;          
            }
            j++;
        }
        i++;
    }
    
    printf("%s","common");
    return common;
}

char if_comm(char *s1, char *s2)
{

}

int main(int argc, char **argv)
{
    char *com;
    int i = 3;
    int f;
    if(argc > 2)
    {
        com = find_common(argv[1], argv[2]);
        // while(i <= argc)
        // {
        //     f = find_common(com, argv[i]);
        //     if (f == 0)
        //         break;
        // }
        print_char(com);
    }
    write(1,"\n",1);
    return (0);
}
