#include<conio.h>
#include<stdio.h>
typedef unsigned int UINT;
int OffBit(UINT iNo)
{
	if (iNo <0)
	{
		printf("Enter Valid entry");
		return;
	}
	iNo = iNo |15;
	return iNo;
}
int main()
{
	unsigned int iValue = 0;
	printf("Enter number\n");
	scanf_s("%u", &iValue);
	printf("Modified number is %u", OffBit(iValue));
	_getch();
	return 0;
}