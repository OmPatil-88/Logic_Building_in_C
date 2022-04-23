#include<stdio.h> 
#include<conio.h>
void Pattern(int iRow, int iCol)
{
	int itemp = iCol;
	char ch = 'A';
	while (iRow > 0)
	{
		if (iRow % 2 == 0)
		{
			ch = 'a';
		}
		else
		{
			ch = 'A';
		}
		while (itemp > 0)
		{
			printf("%c ", ch);
			ch++;
			itemp--;
		}
		printf("\n");
		iRow--;
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