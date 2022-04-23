#include<stdio.h>
#include<conio.h>
typedef int BOOL;
#define True 1
#define False 0
BOOL ChkEqual(int,int);
int main()
{
	int no1 = 0,no2=0;
	BOOL b_ret = False;
	printf("Enter Two numbers\n");
	scanf_s("%d%d", &no1,&no2);
	b_ret = ChkEqual(no1,no2);
	if (b_ret == True)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal");
	}
	_getch();
	return 0;
}
BOOL ChkEqual(int num1,int num2)
{
	if (num1 == num2)
	{
		return True;
	}
	else
	{
		return False;
	}
}