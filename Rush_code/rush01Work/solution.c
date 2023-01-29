/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafrin <shazeen2405@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:08:27 by nafrin            #+#    #+#             */
/*   Updated: 2022/05/28 12:08:30 by nafrin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void create_matrix(int top, int first_row_tofill, int first_col_tofill, int width, int **matrix)
{
    // fill first col and first matrix 
    int r;
    int c;
    int n = 1;
    if(top == 1)
    {
        r = first_row_tofill;
        c = first_col_tofill;
        //first row of matrix
        while(c < width)
        {
            matrix[r][c] = n;
            c++;
            n++;
        }
        //first col of matrix
        c = first_col_tofill;
        r++;
         while(r < width)
        {
            matrix[r][c] = n;
            r++;
            n++;
        }
        first_row_tofill++;
        first_col_tofill++;
        if(width > 1)
        create_matrix(top,first_row_tofill, first_col_tofill, width-1, matrix);
    }
     if(top == 0)
    {
        r = first_row_tofill;
        c = first_col_tofill;
        //first row of matrix
        while(c > 0)
        {
            matrix[r][c] = n;
            c--;
            n++;
        }
        //first col of matrix
        c = first_col_tofill;
        r--;
         while(r > 0)
        {
            matrix[r][c] = n;
            r--;
            n++;
        }
        first_row_tofill--;
        first_col_tofill--;
        if(width > 1)
        create_matrix(top, first_row_tofill, first_col_tofill, width-1, matrix);
    }
    
}

int main(int argc , char ** argv)
{
    char *input; // terminal input string
    int row_col_arr[36];
    int i = 0; //terminal input ctr
    int j = 0; //getting row and col value of matrix
    int k = 0;
    int size;


    if (argc > 1)
    {
       input = argv[1];
       while(input[i] != '\0')
       {
           if(input[i] != ' ')
           { 
               row_col_arr[j] = input[i] - '0';
               j++; 
           }
           i++;
       }

    }

    size = j;
    int l = 0;
    int width = size/4;
    int col_up_arr[width];
    int col_down_arr[width];
    int row_left_arr[width];
    int row_right_arr[width];
    int *p = malloc(width);
    int matrix[*p][*p];

    while( k < size){
        if(k < width){
        col_up_arr[l] = row_col_arr[k];
        }
        if(k >=width && k < width*2){
        col_down_arr[l] = row_col_arr[k];
        }
        if(k >=width*2 && k < width*3){
        row_left_arr[l] = row_col_arr[k];
        }
        if(k >=width*3){
        row_right_arr[l] = row_col_arr[k];
        }
        l++;
        k++;
        if(l == 4)
        l = 0;
        
    } 

    //finding col where visible towers equal to number of towers

    int m = 0;
    int first_col_tofill;
    int first_row_tofill;
    int top = 1; // variable to check top and left ,....if 0 right and bottom
    while(m < width)
    {
        if(col_up_arr[m] == width)
            {
                first_col_tofill = m; 
                first_row_tofill = m;
                top = 1;
            }
        if(col_down_arr[m] == width)
            {
                first_col_tofill = m; 
                first_row_tofill = m;
                top = 0;
            }
        m++;    
    }  

    create_matrix(top, first_row_tofill,first_col_tofill, width, matrix);
    

    return (0);
}

