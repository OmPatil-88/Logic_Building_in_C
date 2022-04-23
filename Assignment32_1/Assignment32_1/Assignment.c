#include<conio.h>
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0 
BOOL ChkBit(UINT iNo)
{    
	if (iNo & (1 << 15))
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
	unsigned int iValue= 0;
	printf("Enter number\n");
	scanf_s("%u", &iValue);
	if (ChkBit(iValue))
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