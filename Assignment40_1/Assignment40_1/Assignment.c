#include<conio.h>
#include<stdio.h>
void Pattern(int iNo) 
{    
	int i = iNo, j = iNo;
	while (i>0)
	{
		while (j >0)
		{
			printf("%d ",j%10);
			j = j / 10;
		}
		printf("\n");
		j = iNo;
		i = i / 10;
	}
}
int main()
{
	int iNum = 0;
	printf("Enter Number\n");
	scanf_s("%d", &iNum);
	Pattern(iNum);
	_getch();
	return 0;
}