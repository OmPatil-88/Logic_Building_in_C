#include<conio.h>
#include<stdio.h>
typedef unsigned int UINT;
int OffBit(UINT iNo, int ibit)
{
	if (ibit < 0)
	{
		printf("Enter Valid entry");
		return;
	}
	iNo = iNo |(1 << (ibit - 1));
	return iNo;
}
int main()
{
	unsigned int iValue = 0, iBit = 0;
	printf("Enter number\n");
	scanf_s("%u", &iValue);
	printf("Enter number\n");
	scanf_s("%u", &iBit);
	printf("Modified number is %u", OffBit(iValue, iBit));
	_getch();
	return 0;
}