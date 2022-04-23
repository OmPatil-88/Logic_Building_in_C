#include<stdio.h> 
#include<conio.h>
int Factorial(int iNo) 
{  
	int iFact = 1;
	while (iNo >0)
	{
		iFact = iFact*iNo;
		iNo--;
	}
	return iFact;
} 
int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	iRet = Factorial(iValue);
	printf("Factorial of number is %d", iRet);
	_getch();
	return 0;
}
