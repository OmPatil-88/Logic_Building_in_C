#include<stdio.h> 
#include<conio.h>
void DisplayDigit(int iNo)
{
	int iDigit = 0;    
	if (iNo<0) 
	{ 
		iNo = -iNo; 
	}
	while (iNo>0)
	{   
		iDigit = iNo%10;   
		printf("%d\n", iDigit);
		iNo = iNo/10; 
	}
}
int main() 
{
	int iValue = 0;
	printf("Enter number\n");  
	scanf_s("%d", &iValue);
	DisplayDigit(iValue);
	_getch();
	return 0;
}