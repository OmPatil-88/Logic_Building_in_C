#include<conio.h>
#include<stdio.h>
void DisplayFactor(int iNo)
{
	int i = 0;
	if (iNo <= 0)
	{
			iNo = -iNo;
	}
	for (i = 1; i<=iNo;i++)
	{
		if (iNo%i==0)
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
	DisplayFactor(iValue);
	_getch();
	return 0;
}