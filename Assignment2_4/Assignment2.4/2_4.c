#include<stdio.h>
int Display(int iNo, int iFrequency)
{
	// Write Updater
	for (;iFrequency>0;iFrequency--)
	{
		printf("%d",iNo);
	}
}
int main()
{
	int iValue = 0;
	int iCount = 0;
	printf("Enter number\n");
	scanf_s("%d",&iValue);
	printf("Enter frequency\n");
	scanf_s("%d",&iCount);
	Display(iValue,iCount);
	return 0;
}