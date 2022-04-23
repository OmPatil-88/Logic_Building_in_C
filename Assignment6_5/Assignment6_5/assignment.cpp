#include<stdio.h> 
#include<conio.h>
float Percentage(float itotal,float imarks)
{  
	if (itotal < imarks)
	{
		printf("Invalid Entry\n");
		return 0;
	}
	return (imarks/itotal)*100;
} 
		int main() 
		{
		int iValue1 = 0, iValue2 = 0;    float fRet = 0.0;
		printf("Please enter total marks");
		scanf_s("%d", &iValue1);    
		printf("Please enter obtained marks");    
		scanf_s("%d", &iValue2);
		fRet = Percentage(iValue1, iValue2);
		if (fRet == 0)
		{
			_getch();
			return 0;
		}
		printf("Percentage is=%f",fRet);   
		_getch();
		return 0;
	}
