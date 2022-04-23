#include<stdio.h>
#include<conio.h>
void StrWrdRev(char *str) 
{
	char *temp = str,*next=str;
	while (*str == 32)
	{
		str++;
		temp++;
		next++;
	}
	while (*str!='\0')
	{
		if (*(str + 1) == 32 || *(str + 1) == 0)
		{
			while (temp<str)
			{
				char ch = '\0';
				ch = *temp;
				*temp = *str;
				*str = ch;
				
				temp++;
				str--;
			}
			while (*(next+1) == 32)
			{
				next++;
			}
			temp = str = next;
			temp++;
	
		}
		next++;
		str++;
	}
} 
int main()
{
	char str[50] = "    Marvellous   Multi OS";
	StrWrdRev(str);
	printf("%s", str);
	_getch();
	return 0;
}