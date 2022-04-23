#include<conio.h>
#include<stdio.h>
int power(int num,int pow)
{
	int val = 1;
	while (pow > 0)
	{
		val = num*val;
			pow--;
	}
	return val;
}
int int_rev(int num)
{
	int rev = 0;
	while (num > 0)
	{
		rev = (rev * 10) + (num % 10);
		num /= 10;
	}
	return rev;
}
void Pattern(int iNo)
{
	iNo = int_rev(iNo);
	int i = iNo, j = iNo, iCnt = 0;
	while (i > 0)
	{
		iCnt++;
		i /= 10;
	}
	i = j;
	while (i>0)
	{
		
		j = j / power(10,(iCnt-1));
		j = int_rev(j);
		while (j >0)
		{
			printf("%d ", j % 10);
			j = j / 10;
		}
		printf("\n");
		j = iNo;
		i = i / 10;
		iCnt--;
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