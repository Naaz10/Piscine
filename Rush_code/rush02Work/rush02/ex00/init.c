/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:51:39 by nafrin            #+#    #+#             */
/*   Updated: 2022/06/05 16:51:41 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "num_header.h"

int verify_condition(int argc, char **argv)
{
    if (argc == 2 && verify_number(argv[1]) == 1)
        return (1);
    else if(argc == 3 && verify_dict(argv[1]) == 1
    && verify_number(argv[2]) == 1)
        return (2);
    else
        return (0); 
}

int verify_number(char *argv)
{
    int i;

    i = 0;
    while (argv[i] != '\0')
    {
        if(argv[i] >= '0' && argv[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

int verify_dict(char *argv)
{
    int i;

    i = 0;
    while (argv[i] != '\0')
    {
        if((argv[i] >= '0' && argv[i] <= '9')
        || (argv[i] >= 'A' && argv[i] <= 'Z') || (argv[i] == '.')
        || (argv[i] >= 'a' && argv[i] <= 'z')|| (argv[i] == '_'))
            i++;
        else
            return (0);
    }
    return (1);
}

void get_number(int argc, char **argv, char **n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    *n = (char *)malloc(40 * sizeof(char *));
    if (verify_condition(argc, argv) == 1)
        i = 1;
    else
        i = 2;
    while (argv[i][j] != '\0')
    {
        n[0][j] = argv[i][j];
        j++;
    }
    n[0][j] = '\0';        
}

void free_memory(char *file, char *dict, char *n)
{
    free(file);
    free(dict);
    free(n);
}