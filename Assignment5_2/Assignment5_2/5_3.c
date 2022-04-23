#include<stdio.h> 
#include<conio.h>
void FactRev(int iNo)
{
	int iFact = 1,i = iNo-1;
	while (i > 0)
	{
		if (iNo%i==0)
		{
			printf("%d  ", i);
		}
		i = i - 1;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");  
	scanf_s("%d", &iValue);  
    FactRev(iValue);
	_getch();
	return 0;
}
