#include<stdio.h>
#include<conio.h>
int PrintEven(int iNo)
{
	int iCnt = 1;
	if (iNo <= 0)
	{
		return 0;
	}
	else
	{
		while (iNo > 0)
		{
			printf("%d  ", 2 * iCnt);
			iCnt++;
			iNo--;
		}
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	PrintEven(iValue);
	_getch();
	return 0;
}