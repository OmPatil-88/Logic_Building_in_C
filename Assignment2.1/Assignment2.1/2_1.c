#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
	int iCnt = 0;
	// Write Updater
	while (iCnt < iNo)
	{
		printf(" * ");
		iNo--;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf_s("%d",&iValue);
	Display(iValue);
	_getch();
	return 0;
}