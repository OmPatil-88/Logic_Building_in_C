#include<stdio.h>
#include<conio.h>
void DisplayEvenFactor(int iNo)
{
	int i = 0;
	if (iNo <= 0)
	{
		iNo = -iNo;
	}
	for (i = 1; i<=iNo;i++)
	{
		if (iNo%2==0 && iNo%i==0)
		{
			printf("%d  ", i);
		}
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	DisplayEvenFactor(iValue);
	_getch();
	return 0;
}