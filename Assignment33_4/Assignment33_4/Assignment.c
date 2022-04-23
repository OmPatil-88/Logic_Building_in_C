#include<conio.h>
#include<stdio.h>
typedef unsigned int UINT;
int OffBit(UINT iNo, int ibit1,int ibit2)
{
	if (ibit2 < 0 || ibit1 <0)
	{
		printf("Enter Valid entry");
		return;
	}
	int itemp = ((1 << (ibit1 - 1)) | (1 << (ibit2 - 1)));
	iNo = iNo ^ itemp;
	return iNo;
}
int main()
{
	unsigned int iValue = 0;
	printf("Enter number\n");
	scanf_s("%u", &iValue);
	printf("Modified number is %u", OffBit(iValue, 7,10));
	_getch();
	return 0;
}