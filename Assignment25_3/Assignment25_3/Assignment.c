#include<conio.h>
#include<stdio.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL;
BOOL ChkDigit(char ch)
{
	if (48 <= ch && ch <= 57)
	{
		return TRUE;
	}
	return FALSE;

}
int main()
{
	char cValue = '\0';  BOOL bRet = FALSE;
	printf("Enter the character\n");
	scanf_s("%c", &cValue);
	bRet = ChkDigit(cValue);
	if (bRet == TRUE)
	{
		printf("Digit");
	}
	else
	{
		printf("Character");
	}
	_getch();
	return 0;
}