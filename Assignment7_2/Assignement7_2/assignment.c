#include<stdio.h> 
#include<conio.h>
void Display(int iNo)
{  
	int i = 1;
	while (iNo > 0)
	{
		printf("%d ", i);
		i++;
		iNo--;
	}
} 
	int main() {
		int iValue = 0; 
		printf("Enter number\n");  
		scanf_s("%d", &iValue);
		Display(iValue);
		_getch();
		return 0;
	}