#include<stdio.h>
#include<conio.h>
int MultDigits(int iNo)
{  
	int imult = 1;
	while (iNo > 0)
	{
		imult = imult*(iNo % 10);
		iNo /= 10;
	}
	return imult;
}
int main() {
	int iValue = 0;  int iRet = 0;
	printf("Enter number\n");  
	scanf_s("%d", &iValue);
	iRet = MultDigits(iValue);
	printf("%d", iRet);
	_getch();
	return 0;
}