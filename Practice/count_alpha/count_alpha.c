/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:48:53 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/07 10:48:55 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int check_exist(char c, char alph[])
{
    int m = 0;
    while (alph[m] >= 'a' && alph[m] <= 'z')
    {
        if(c == alph[m])
        {
            return m;
        }  
        m++;
    }
    return (-1);
}
int main(int argc, char **argv)
{   
    char alph[100];
    int count[100];
    int i= 0;
    int j =0;
    int k =0;
    int l;
    char c;
    if(argc == 2){
        while(argv[1][i] != '\0')
        {
            c = argv[1][i];
            if(c >= 'A' && c <= 'Z')
            {
                c += 'a' - 'A';
            }
            if(c >= 'a' && c<= 'z')
            {
                            
               l = check_exist(c, alph);
               if(l == -1)
               {
                    alph[j] = c;
                    count[j] = 1;
                    j++;
               }
               else{
                   count[l]++;
               }                 
            }
            i++;
        }
       while (count[k] > 0 && (alph[k]>= 'a' && alph[k] <= 'z'))
       {
           if(k != 0)
           {
               printf("%s",", ");
           }
           printf("%d%c", count[k], alph[k]);
           
           k++;
       }       
    }
    else
        write(1, "\n", 1);
    return (0);
}
