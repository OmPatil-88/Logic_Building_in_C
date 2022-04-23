#include<conio.h>
#include<stdio.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL;
BOOL ChkSmall(char ch)
{
	if (97 <= ch && ch <= 122)
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
	bRet = ChkSmall(cValue);
	if (bRet == TRUE)
	{
		printf("Small");
	}
	else
	{
		printf("Capital");
	}
	_getch();
	return 0;
}