#include<stdio.h> 
#include<conio.h>
int DollarToINR(int iNo) 
{  
	return iNo * 70;
} 
	int main()
	{
		int iValue = 0, iRet = 0;
		printf("Enter number of USD\n");
		scanf_s("%d", &iValue);
		iRet = DollarToINR(iValue);
		printf("Value in INR is %d", iRet);
		_getch();
		return 0;
	}