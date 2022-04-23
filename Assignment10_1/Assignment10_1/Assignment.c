#include<stdio.h> 
#include<conio.h>
#define PI 3.14
double CircleArea(float fRadius) 
{  
	return PI*fRadius*fRadius;
} 
	int main() {
		float fValue = 0.0;  double dRet = 0.0;
		printf("Enter radius\n");  
		scanf_s("%f", &fValue);
		dRet = CircleArea(fValue);
		printf("Area of Circle is %.4f",dRet);
		_getch();
		return 0;
	}