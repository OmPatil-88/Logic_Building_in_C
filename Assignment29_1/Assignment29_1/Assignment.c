#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0 
typedef int BOOL;
BOOL ChkChar(char *str,char ch)
{
	int icnt = 0;
	while (*str != '\0')
	{
		if (*str == ch)
		{
			return TRUE;
		}
		str++;
	}
	return FALSE;
}
int main()
{
	char arr[20],cvalue='\0';
	BOOL iRet = 0;
	printf("Enter string\n");
	gets(arr);
	printf("Enter Character\n");
	scanf_s("%c", &cvalue);
	iRet = ChkChar(arr, cvalue);
	if (iRet)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	_getch();
	return 0;
}