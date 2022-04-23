#include<conio.h>
#include<stdio.h>
int MultFact(int iNo)
{

	int iFact = 1,i=1;
	while (i<=(iNo/2))
	{
	     if (iNo%i == 0)
		{
			iFact = iFact * i;
		}
		 i = i + 1;
	}
	return iFact;
}
int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf_s("%d", &iValue);
	printf("Multiplication of Factor of number %d is %d", iValue, MultFact(iValue));
	_getch();
}
