#include<conio.h>
#include<stdio.h>
int Multiply(int num1 ,int num2, int num3)
{    
	if (num1 == 0)
	{
		num1 = 1;
	}
	if (num2 == 0)
	{
		num2 = 1;
	}
	if(num3==0)
	{
		num3 = 1;
	}

	return num1*num2*num3;
} 
int main()
{
	int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
	printf("Please enter three numbers\n");
	scanf_s("%d %d %d", &iValue1, &iValue2, &iValue3);
	iRet = Multiply(iValue1,iValue2,iValue3);
	printf("Multiplication of numbers is\n=%d",iRet);
	_getch();
	return 0;
}