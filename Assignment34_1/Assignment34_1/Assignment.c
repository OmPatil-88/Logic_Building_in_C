#include<conio.h>
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0 
BOOL ChkBit(UINT iNo,int iBit)
{
	if (iNo & (1 << iBit-1))
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
	unsigned int iValue = 0,ibit=0;
	printf("Enter number\n");
	scanf_s("%u", &iValue);
	printf("Enter bit\n");
	scanf_s("%u", &ibit);
	if (ChkBit(iValue,ibit))
	{
		printf("On");
	}
	else
	{
		printf("Off");
	}
	_getch();
	return 0;
}