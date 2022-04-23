#include<stdio.h>
#include<conio.h>
float CalculateBill(int iAmount)
{
	if (iAmount < 500)
	{
		return 500;
	}
	else if (iAmount >= 500 && iAmount <= 1500)
	{
		return (iAmount - (iAmount*(10.0 / 100.0)));
	}
	else
	{
		return (iAmount - (iAmount*(15.0 / 100.0)));
	}
}
int main()
{
	int iValue = 0;
	printf("Enter value\n");
	scanf_s("%d", &iValue);
	printf("Discounted value is=%f \n", CalculateBill(iValue));
	_getch();
}