#include<stdio.h> 
#include<conio.h>
int CountFour(int iNo)
{
	int icnt = 0;
	while (iNo>0)
	{
		if (iNo % 10 == 4)
		{
			icnt++;
		}
		iNo /= 10;
	}
	return icnt;
}
int main() {
	int iValue = 0;  int iRet = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	iRet = CountFour(iValue);
	printf("%d", iRet);
	_getch();
	return 0;
}