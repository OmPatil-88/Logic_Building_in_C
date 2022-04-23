#include<stdio.h>
#include<conio.h>
void Table(int iNo) 
{  
	int icnt = 1;
	if (iNo < 0)
	{
		iNo = -iNo;
		icnt = 10;
		while (icnt >= 1)
		{
			printf("%d ", iNo*icnt);
			icnt--;
		}
		goto end;
	}
	while (icnt <= 10)
	{
		printf("%d ", iNo*icnt);
		icnt++;
	}
	end:{}
} 
	int main()
	{
		int iValue = 0;
		printf("Enter number\n");  
		scanf_s("%d", &iValue);
		Table(iValue);
		_getch();
		return 0;
	}