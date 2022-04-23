#include<stdio.h> 
#include<conio.h>
void Pattern(int iNo) 
{  
	for (char ch = 'A'; iNo > 0; iNo--,ch++)
	{
		printf("%c ",ch);
	}
} 
	int main() 
	{
		int iValue = 0;
		printf("Enter number of elements\n");  
		scanf_s("%d", &iValue);
		Pattern(iValue);
		_getch();
		return 0;
	}