#include<stdio.h>

int check_exist(char c, char alph[],int k)
{
    int i = 0;
    //while((alph[i] >='a' && alph[i]<='z') || (alph[i]>='A' && alph[i]<='Z') || (alph[i]>='0' && alph[i]<='9'))
    while (i<= k)
    {
        if(c == alph[i])
            return i;
        i++;
    }
    return -1;
}
int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int l = 0;
    int k = 0;
    int m = 0;
    char alph[100];
    //int count[100];
    if(argc > 1)
    {
           while(argv[1][j] != '\0')
           {
               i = 0;
               while(argv[2][i] != '\0')
               {
               if(argv[1][j] == argv[2][i])
               {
                   l = check_exist(argv[1][j],alph,k);
                   if(l == -1)
                   {
                       alph[k] = argv[1][j];
                       k++;
                   }
               }
               i++;
               }
               j++;
           }
         while (m <= k)
         {
            printf("%c",alph[m]);
            m++;            
         }
               
    }
}