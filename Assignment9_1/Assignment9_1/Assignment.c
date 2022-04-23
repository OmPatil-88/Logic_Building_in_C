#include<stdio.h> 
#include<conio.h>
void Display(int iNo) 
{
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	int icnt = iNo;
	while (icnt>0)
	{
		printf("* ");
		icnt--;
	}
	while (icnt < iNo)
	{
		printf("# ");
		icnt++;
	}
} 
int main()
{
		int iValue = 0;
		printf("Enter number\n"); 
		scanf_s("%d", &iValue);
		Display(iValue);
		_getch();
		return 0;
}