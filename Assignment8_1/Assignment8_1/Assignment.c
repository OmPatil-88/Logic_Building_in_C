#include<conio.h>
#include<stdio.h>
void Number(int iNo)
{
	if (iNo < 50)
	{
		printf("Small");
	}
	else if (iNo > 50 && iNo < 100)
	{
		printf("Medium");
	}
	else if (iNo > 100)
	{
		printf("large");
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");  
	scanf_s("%d", &iValue);
	Number(iValue);
	_getch();
	return 0;
}