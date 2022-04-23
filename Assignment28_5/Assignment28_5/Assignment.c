#include<conio.h>
#include<stdio.h>
int DisplayDigit(char *str)
{
	int icnt = 0;
	while (*str != '\0')
	{
		if (*str==32)
		{
			icnt++;
		}
		str++;
	}
	return icnt;
}
int main()
{
	char arr[20];
	int iRet = 0;
	printf("Enter string\n");
	gets(arr);
	iRet=DisplayDigit(arr);
	printf("%d", iRet);
	_getch();
	return 0;
}