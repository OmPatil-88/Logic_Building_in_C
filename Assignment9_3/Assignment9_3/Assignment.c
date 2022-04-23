#include<stdio.h> 
#include<conio.h>
int EvenFactorial(int iNo)
{
	if (iNo<0)
	{
		iNo = -iNo;
	}
	int iEFact = 1;
	while (iNo > 0)
	{
		if (iNo % 2 == 0)
		{
			iEFact *= iNo;
		}
		iNo--;
	}
	return iEFact;
} 
	int main() {
		int iValue = 0, iRet = 0;
		printf("Enter number\n");  
		scanf_s("%d", &iValue);
		iRet = EvenFactorial(iValue);
		printf("Even Factorial of number is %d", iRet);
		_getch();
		return 0;
	}