#include<stdio.h>
#include<conio.h>
float IncomeTax(int iAmount)
{
	float iTax = 0.0;
	if (iAmount !=0)
	{
		if (iAmount > 500000)
		{
			iAmount = iAmount - 500000;
		}
		else
		{
			return iTax;
		}
	}
	if (iAmount > 0)
	{
		if (iAmount <= 500000)
		{
			iTax = iTax+(iAmount*(10.0 / 100.0));
			return iTax;
		}
		else
		{
			iTax = iTax + 50000;
			iAmount = iAmount - 500000;
		}
 	}
	if (iAmount >0)
	{
		if (iAmount <= 500000)
		{
			iTax =iTax + (iAmount*(20.0 / 100.0));
			return iTax;
		}
		else
		{
			iTax = iTax + 200000;
			iAmount = iAmount - 1000000;
		}
	}
	if (iAmount != 0)
	{
		iTax = iTax +(iAmount*(30.0 / 100.0));
	}
	return iTax;
}
int main()
{
	int iValue = 0;
	printf("Enter value\n");
	scanf_s("%d", &iValue);
	printf("Tax value is=%f \n", IncomeTax(iValue));
	_getch();
}