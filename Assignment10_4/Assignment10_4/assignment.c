#include<stdio.h> 
#include<conio.h>
double FhtoCs(float fTemp) 
{
	return (fTemp - 32)*((float)5/9);
} 
	int main()
{
		float fValue = 0.0;  double dRet = 0.0;
		printf("Enter temperature in Fahrenheit\n");  
		scanf_s("%f", &fValue);
		dRet = FhtoCs(fValue);
		printf("Temperature in Ceslius %f",dRet);
		_getch();
		return 0;
}