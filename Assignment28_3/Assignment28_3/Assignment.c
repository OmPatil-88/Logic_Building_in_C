#include<conio.h>
#include<stdio.h>
void strtogglex(char *str)
{
	while (*str != '\0')
	{
		if (97 <= *str && *str <= 122)
		{
			*str = *str - 32;
		}
		else if (65 <= *str && *str <= 90)
		{
			*str = *str +32;
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
	strtogglex(arr);
	_getch();
	return 0;
}