#include <stdio.h>
#include <stdlib.h>

int check_sep(char c, char *sep)
{
	int i = 0;
	while (sep[i])
	{
		if(c == sep[i])
			return 1;
		i++;	
	}
	return 0;
}

int get_len(char *str, char *sep)
{
	int i= 0;
		while(str[i] && !check_sep(str[i],sep))
			i++;
		
	return i;
}
char *get_word(char *str, char *sep)
{
	char *word;
	int i = 0;
	int size = get_len(str,sep);
	word = (char *)malloc(size * sizeof(char) + 1);
	while (i < size)
	{
		word[i] = str[i];
		i++;
	}
	
	word[i] = '\0';
	return word;
}
int get_num_words(char *str, char *sep)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while(str[i] && check_sep(str[i],sep))
			i++;
		if(str[i])
			count++;	
		while(str[i] && !check_sep(str[i],sep))
			i++;
	}
	
	return count;
}
char **ft_split(char *str, char *sep)
{
	char **strings;
	int i = 0;
	strings = (char **)malloc(get_num_words(str,sep)* sizeof(char *) + 1);
	if(!strings)
	return 0;
	while (*str)
	{
		while(*str && check_sep(*str,sep))
			str++;
		if(*str)
		{	
			strings[i] = get_word(str, sep);
			i++;
		}
		while(*str && !check_sep(*str,sep))
			str++;	
	}
	strings[i] = 0;
	return strings;
	
}

int main(void)
{
	int i=0;
	char **strings;
	strings = ft_split("Hello,Naaz.How/are you","/ .,");
	while (strings[i])
	{
		printf("%s\n",strings[i]);
		i++;
	}
	
	return 0;
}