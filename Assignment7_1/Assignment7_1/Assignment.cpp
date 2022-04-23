#include<stdio.h> 
#include<conio.h>
void Pattern(int iNo)
{  
	while (iNo > 0)
	{
		printf(" $ *");
		iNo--;
	}
	while(iNo<0)
	{
		printf(" $ *");
		iNo++;
	}
} 
	int main()
	{
		int iValue = 0;  
		printf("Enter number\n"); 
		scanf_s("%d", &iValue);
		Pattern(iValue);
		_getch();
		return 0;
	}