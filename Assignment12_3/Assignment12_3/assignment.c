#include<stdio.h> 
#include<conio.h>
int CountTwo(int iNo) 
{
	int icnt = 0;
	while (iNo>0)
	{
		if (iNo % 10 == 2)
		{
			icnt++;
		}
		iNo /= 10;
	}
	return icnt;
} 
int main() {
		int iValue = 0;  int iRet = 0;
		printf("Enter number\n");  
		scanf_s("%d", &iValue);
		iRet = CountTwo(iValue);
		printf("%d", iRet);    
		_getch();
		return 0;
	}