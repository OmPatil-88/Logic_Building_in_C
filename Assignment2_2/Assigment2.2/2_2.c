#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
	int icnt = 0;
	// Write Updater
	while (iNo > icnt)
	{
		printf("*");
		icnt++;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf_s("%d",&iValue);
	Display(iValue);
	return 0;
}