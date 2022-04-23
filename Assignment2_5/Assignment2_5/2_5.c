#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{ 
	if (iNo <= 0)
	{
		return -1;
	}
	if (iNo % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number");
	scanf_s("%d", &iValue);
	bRet = ChkEven(iValue);
	if (bRet == TRUE)
	{
		printf("%d is Even", iValue);
	}
	else if (bRet==FALSE)
	{
		printf("%d is ODD", iValue);
	}
	else
	{ 
		printf("%d is not Accepted",iValue);
	}
	_getch();
}
	// Display result