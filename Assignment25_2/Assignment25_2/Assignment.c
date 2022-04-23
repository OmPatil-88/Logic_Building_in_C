#include<conio.h>
#include<stdio.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL;
BOOL ChkCapital(char ch)
{
	if (65 <= ch && ch <= 90)
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
	bRet = ChkCapital(cValue);
	if (bRet == TRUE)
	{
		printf("Capital");
	}
	else 
	{
		printf("Not Capital");
	}
	_getch();
	return 0;
}