#include<stdio.h>
#include<conio.h>
void TableRev(int iNo)
{
	int icnt = 10;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
		while (icnt >= 1)
		{
			printf("%d ", iNo*icnt);
			icnt--;
		}
	
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	TableRev(iValue);
	_getch();
	return 0;
}