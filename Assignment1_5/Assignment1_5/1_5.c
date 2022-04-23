#include<stdio.h>
#include<conio.h>
void Accept(int iNo)
{
	int iCnt = 0;
	for (iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("*");
	}
}
int main()
{
	int iValue = 0;
	iValue = 5;
	Accept(iValue);
	_getch();
	return 0;
}