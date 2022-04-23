#include<conio.h>
#include<stdio.h>
typedef unsigned int UINT;
void ChkBit(UINT iNo, int ibit)
{
	if (ibit < 0)
	{
		printf("Enter Valid entry");
		return -1;
	}
	printf("%u\n", 1 << ibit);
	if (iNo & (1 << ibit))
	{
		printf("%dth bit ON\n",ibit);
		return ;
	}
	else
	{
		printf("%dth bit OFF\n",ibit);
		return ;
	}
}
int main()
{
	unsigned int iValue = 0;
	printf("Enter number\n");
	scanf_s("%u", &iValue);
	ChkBit(iValue, 7);
	ChkBit(iValue, 15);
	ChkBit(iValue, 21);
	ChkBit(iValue, 28);
   _getch();
	return 0;
}