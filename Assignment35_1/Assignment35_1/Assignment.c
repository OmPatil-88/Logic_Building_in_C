#include<conio.h>
#include<stdio.h>
typedef unsigned int UINT;
int CountOne(UINT iNo)
{
	int count = 0;
	if (iNo < 0)
	{
		printf("Enter Valid entry");
		return;
	}
	while (iNo)
	{
		count += iNo & 1;
		iNo = iNo >> 1;
	}
	return count;
}
int main()
{
	unsigned int iValue = 0, iBit = 0;
	printf("Enter number\n");
	scanf_s("%u", &iValue);
	printf("Modified number is %u", CountOne(iValue));
	_getch();
	return 0;
}