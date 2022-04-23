#include<stdio.h> 
#include<conio.h>
void OddDisplay(int iNo) 
{
	int i = 1;
	while (iNo>0)
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
		}
		i++;
		iNo--;
	}
	
} 
	int main()
	{ 
	int iValue = 0; 
	printf("Enter number\n"); 
	scanf_s("%d", &iValue);
	OddDisplay(iValue);
	_getch();
	return 0; 
	}