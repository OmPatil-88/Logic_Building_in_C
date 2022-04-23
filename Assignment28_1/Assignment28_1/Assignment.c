#include<conio.h>
#include<stdio.h>
void strlwrx(char *str)
{
	while (*str != '\0')
	{
		if (65 <= *str && *str <= 90)
		{
			*str=*str + 32;
		}
		printf("%c",*str);
		str++;
	}
}
int main()
{
	char arr[20];
	printf("Enter string\n");
	gets(arr);
	strlwrx(arr);
	_getch();
	return 0;
}