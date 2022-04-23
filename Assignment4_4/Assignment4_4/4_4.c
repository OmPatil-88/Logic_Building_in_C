#include<conio.h>
#include<stdio.h>
int TouristBill(int iKilometer)
{
	if (iKilometer < 100)
	{
		return iKilometer * 25;
	}
	else if(iKilometer > 100)
	{
		return iKilometer * 15;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter the Number of kilometer\n");
	scanf_s("%d", &iValue);
	printf("\nRent is %d",TouristBill(iValue));
	_getch();
}