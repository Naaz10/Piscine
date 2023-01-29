#include <unistd.h>
#include <stdio.h>

int check_exist(char ch, char alph[])
{
    int i = 0;
    while(alph[i] >= 'a' && alph[i] <= 'z')
    {
        if(ch == alph[i])
            return i;
        i++;
    }
    return -1;
}

int main(int argc, char **argv)
{
    char alph[100];
    int count[100];
    int i = 0;
    char ch;
    int l;
    int j = 0;
    if(argc > 1)
    {
        while (argv[1][i])
        {
            ch = argv[1][i];
            if(ch>= 'A' && ch <= 'Z')
                ch += 'a' - 'A';
            if(ch >= 'a' && ch <= 'z')
            {
                l = check_exist(ch, alph);
                if(l == -1)
                {
                    alph[j] = ch;
                    count[j] = 1;
                    j++;
                }
                else
                {
                    count[l]++;
                }
               
            }   
            i++;
        }
        int k = 0;
        while(count[k] > 0 && alph[k] >= 'a' && alph[k] <= 'z')
        {
            if(k != 0)
                printf("%s"," ,");
            printf("%d%c",count[k], alph[k]);
            k++;
        }        
    }
    write(1,"\n",1);
    return 0;
}