#include<stdio.h>
#include<conio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
BOOL Display(char ch)
{
	if (33 <= ch && ch <= 42)
	{
		return TRUE;
	}
	return FALSE;
}
int main()
{
	char cValue = '\0';
	printf("Enter the character\n");
	scanf_s("%c", &cValue);
	if (Display(cValue))
	{
		printf("symball");
	}
	else
	{
		printf("Non Symball");
	}
	_getch();
	return 0;
}