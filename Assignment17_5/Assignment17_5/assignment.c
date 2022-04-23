#include<stdio.h> 
#include<conio.h>
void Pattern(int iRow, int iCol)
{
	int itemp = iCol, iRcnt = 1;
	while (iRow > 0)
	{

		while (itemp > 0)
		{
		printf(" %d ", iCol - (itemp - iRcnt));
		itemp--;
		}

		printf("\n");
		iRow--;
		iRcnt++;
		itemp = iCol;
	}

}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows and columns\n");
	scanf_s("%d %d", &iValue1, &iValue2);
	Pattern(iValue1, iValue2);
	_getch();
	return 0;
}