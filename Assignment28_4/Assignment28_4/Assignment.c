#include<conio.h>
#include<stdio.h>
void DisplayDigit(char *str)
{
	while (*str != '\0')
	{
		if (48 <= *str && *str <= 57)
		{
			printf("%c", *str);
		}
		str++;
	}
}
int main()
{
	char arr[20];
	printf("Enter string\n");
	gets(arr);
	DisplayDigit(arr);
	_getch();
	return 0;
}