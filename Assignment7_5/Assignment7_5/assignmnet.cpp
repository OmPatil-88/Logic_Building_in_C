#include<stdio.h> 
#include<conio.h>
void MultipleDisplay(int iNo) 
{  
	int icnt = 1;
	while (icnt < 6)
	{
		printf("%d  ", icnt*iNo);
		icnt++;
	}
} 
int main()
{ 
int iValue = 0;  
printf("Enter number\n");  
scanf_s("%d", &iValue);  
MultipleDisplay(iValue);
_getch();
return 0; 
}
