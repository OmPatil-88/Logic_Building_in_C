#include<stdio.h> 
#include<conio.h>
int FactorialDiff(int iNo)
{
	if(iNo<0)
	{
		iNo = -iNo;
	}
	int iOFact = 1, iEFact = 1;
	while (iNo > 0)
	{
		if (iNo % 2 != 0)
		{
			iOFact *= iNo;
		}
		else
		{
			iEFact *= iNo;
		}
		iNo--;
	}
	return iEFact - iOFact;
}
int main() {
	int iValue = 0, iRet = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	iRet = FactorialDiff(iValue);
	printf("Factorial diffrence is %d", iRet);
	_getch();
	return 0;
}