#include<conio.h>
#include<stdio.h>
void struprx(char *str)
{
	while (*str != '\0')
	{
		if (97 <= *str && *str <= 122)
		{
			*str = *str - 32;
		}
		printf("%c", *str);
		str++;
	}
}
int main()
{
	char arr[20];
	printf("Enter string\n");
	gets(arr);
	struprx(arr);
	_getch();
	return 0;
}