#include<conio.h>
#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;
BOOL CommonBits(UINT iNo)
{
	int count = 1;
	if (iNo < 0)
	{
		printf("Enter Valid entry");
		return;
	}
	if (iNo&(1 << 8) || iNo&(1 << 11))
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
	printf("Enter number1\n");
	scanf_s("%u", &iValue);
	if (CommonBits(iValue))
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