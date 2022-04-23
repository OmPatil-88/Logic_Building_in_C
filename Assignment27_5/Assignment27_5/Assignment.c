#include<conio.h>
#include<stdio.h>
void Reverse(char *str)
{
	int iCnt = 0;
	
	while (*str != '\0')
	{
		iCnt++;
		str++;
	}
	str--;
	iCnt--;
	while (iCnt>=0)
	{
		printf("%c",*str);
		iCnt--;
		str--;
	}
}
int main()
{
	char arr[20];
	printf("Enter string\n");
	gets(arr);
	Reverse(arr);
	_getch();
	return 0;
}