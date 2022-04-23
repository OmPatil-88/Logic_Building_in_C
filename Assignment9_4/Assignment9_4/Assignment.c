#include<stdio.h> 
#include<conio.h>
int OddFactorial(int iNo)
{
	if (iNo<0)
	{
		iNo = -iNo;
	}
	int iOFact = 1;
	while (iNo > 0)
	{
		if (iNo % 2 != 0)
		{
			iOFact *= iNo;
		}
		iNo--;
	}
	return iOFact;
}
int main() {
	int iValue = 0, iRet = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	iRet = OddFactorial(iValue);
	printf("Odd Factorial of number is %d", iRet);
	_getch();
	return 0;
}