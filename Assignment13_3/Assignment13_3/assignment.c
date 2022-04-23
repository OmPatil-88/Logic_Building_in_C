#include<stdio.h> 
#include<conio.h>
int CountRange(int iNo)
{
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	int icnt = 0;
	while (iNo>0)
	{
		if (3 <(iNo%10) && (iNo % 10) < 7)
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
	iRet = CountRange(iValue);
	printf("%d", iRet);
	_getch();
	return 0;
}