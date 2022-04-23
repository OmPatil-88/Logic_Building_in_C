#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
	if (iNo < 10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
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