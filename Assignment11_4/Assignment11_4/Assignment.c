#include<stdio.h> 
#include<conio.h>
int EvenRangeSum(int iStart, int iEnd)
{
	int iSum = 0;
	if (iEnd < iStart || iStart<0)
	{
		printf("Invalid Range");
		return NULL;
	}
	while (iStart <= iEnd)
	{
		if (iStart % 2 == 0)
		{
			iSum += iStart;
	    }
		iStart++;
	}
	return iSum;
}
int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	printf("Enter starting point\n");
	scanf_s("%d", &iValue1);
	printf("Enter ending point\n");
	scanf_s("%d", &iValue2);
	iRet = EvenRangeSum(iValue1, iValue2);
	printf("Sum of Even numbers between Range is=%d", iRet);
	_getch();
	return 0;
}