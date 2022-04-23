#include<stdio.h>
#include<conio.h>
int KMtoMeter(int iNo)
{  
	return iNo * 1000;
} 
int main() 
{
		int iValue = 0, iRet = 0;
		printf("Enter distance\n");  
		scanf_s("%d", &iValue);
		iRet = KMtoMeter(iValue);
		printf("Distance in Meter %d",iRet);
		_getch();
		return 0;
}