#include<stdio.h> 
#include<conio.h>
void Pattern(int iRow, int iCol)
{
	int itemp = 0, iRcnt = 0;
	for (iRcnt = 1; iRow >= iRcnt; iRcnt++)
	{
		for (itemp = 1; iCol >= itemp; itemp++)
		{
			if (itemp + iRcnt == iRow + 1 || itemp == 1 || iRcnt == 1 || itemp == iCol || iRcnt == iRow)
			{
				printf("* ");
			}
			else if(itemp + iRcnt > iRow + 1)
			{
				printf("$ ");
			}
			else
			{
				printf("# ");
			}
		}
		printf("\n");
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