#include<conio.h>
#include<stdio.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL;
BOOL ChkAlpha(char ch) 
{  
	if ((65 <= ch && ch <= 90) || (97 <= ch && ch <= 122))
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
	bRet = ChkAlpha(cValue);
	if (bRet == TRUE) 
	{
		printf("It is Character"); 
	}
	else 
	{
		printf("It is not a Character"); 
	}
	_getch();
	return 0;
}