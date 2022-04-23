#include<stdio.h> 
#include<conio.h>
double SquareMeter(int iValue)
{  
	return iValue*0.0929;
} 
int main()
{
	int iValue = 0;  double dRet = 0.0;
	printf("Enter area in square feet\n");  
	scanf_s("%d", &iValue);
	dRet = SquareMeter(iValue);
	printf("Value in SqureMeter %.4f",dRet);
	_getch();
	return 0;
}