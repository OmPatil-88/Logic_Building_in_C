#include<stdio.h> 
#include<conio.h>
int CountDiff(int iNo)
{
	int iESum=0, iOsum=0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	int icnt = 0;
	while (iNo>0)
	{
		if ((iNo % 10) % 2 == 0)
		{
			iESum += (iNo%10);
		}
		else
		{
			iOsum += (iNo % 10);
		}
		iNo /= 10;
	}
	return iESum- iOsum;
}
int main() {
	int iValue = 0;  int iRet = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	iRet = CountDiff(iValue);
	printf("%d", iRet);
	_getch();
	return 0;
}