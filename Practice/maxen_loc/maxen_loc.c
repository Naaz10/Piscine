#include <unistd.h>

int str_len(char *str)
{
    int i;
    i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    } 
    return (i);   
}

int ft_strstr(char *s, char *lcs, int end)
{
    int success = 0;
    int i = 0;
    int j;
    while (s[i] && !success)
    {
        success = 1;
        j = 0;
        while (j<= end)
        {
            if(s[i] != lcs[j])
            {
                success = 0;
                break;
            }
            j++;
            i++;
        }        
        i++;
    }
    return success;

}

int main(int argc, char **argv)
{
    int maxlen, lcs_start= 1, lcs_end =0;
    int end;
    if(argc > 1)
    {
        maxlen = str_len(argv[1]);
        int start  = 0, success = 1, i;
        while (start < maxlen)
        {
            success = 1;
            end = start;
            while (end < maxlen && success)
            {
                i = 2;
                success = 1;
                while (i < argc && success)
                {
                    if(!(ft_strstr(argv[i], & argv[1][start], end - start)))
                    {
                        success = 0;
                        break;
                    }
                    i++;
                }
                if(!success)
                    break;
                if(end - start > lcs_end- lcs_start)    
                {
                    lcs_start = start;
                    lcs_end = end;
                }
                end++;
            }
            start++;   
            }
        if(lcs_end - lcs_start >= 0)
            write(1, &argv[1][lcs_start],lcs_end - lcs_start +1);            
                   
    }
    write(1,"\n", 1);    
    return (0);
}