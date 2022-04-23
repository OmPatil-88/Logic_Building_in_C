#include<conio.h>
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0 
BOOL ChkBit(UINT iNo,int ibit)
{
	if (ibit < 0)
	{
		printf("Enter Valid entry");
		return -1;
	}
	if (iNo & (1 << ibit))
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
	unsigned int iValue = 0;
	printf("Enter number\n");
	scanf_s("%u", &iValue);
	if (ChkBit(iValue,5))
	{
		printf("5th bit On \n");
	}
	else
	{
		printf("5th bit Off\n");
	}
	if (ChkBit(iValue, 18))
	{
		printf("18th bit On");
	}
	else
	{
		printf("18th bit Off");
	}
	_getch();
	return 0;
}