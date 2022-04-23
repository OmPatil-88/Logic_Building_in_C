#include<conio.h>
#include<stdio.h>
typedef unsigned int UINT;
void CommonBits(UINT iNo, UINT iNo2)
{
	int count = 1;
	if (iNo < 0 || iNo2<0)
	{
		printf("Enter Valid entry");
		return;
	}
	if (iNo < iNo2)
	{
		iNo = iNo + iNo2;
		iNo2 = iNo - iNo2;
		iNo = iNo - iNo2;
	}
	while (iNo)
	{
		if ((iNo & 1 )== (iNo2 & 1))
		{
			printf("%d ", count);
		}
		iNo = iNo >> 1;
		iNo2 = iNo2 >> 1;
		count++;
	}
}
int main()
{
	unsigned int iValue = 0, iValue2 = 0;
	printf("Enter number1\n");
	scanf_s("%u", &iValue);
	printf("Enter number2\n");
	scanf_s("%u", &iValue2);
	CommonBits(iValue,iValue2);
	_getch();
	return 0;
}