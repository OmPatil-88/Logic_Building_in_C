#include<conio.h>
#include<stdio.h>
typedef unsigned int UINT;
int ChkBit(UINT iNo, int iLeft, int iRight)
{
	int num = 1;
	if (iNo < 0)
	{
		printf("Enter Valid entry");
		return;
	}
	num = (1 << iRight);
	num=num- iLeft;
	return iNo ^ num;
}
int main()
{
	unsigned int iValue = 0,ipos1=0,ipos2=0;
	printf("Enter number1\n");
	scanf_s("%u", &iValue);
	printf("Enter Start bit No\n");
	scanf_s("%u", &ipos1);
	printf("Enter End bit No\n");
	scanf_s("%u", &ipos2);
	printf("The result is \n%d",ChkBit(iValue,ipos1,ipos2));
	_getch();
	return 0;
}