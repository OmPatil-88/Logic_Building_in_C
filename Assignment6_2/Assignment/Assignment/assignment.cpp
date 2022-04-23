#include<stdio.h>
#include<conio.h>
typedef int BOOL;
#define True 1
#define False 0
BOOL ChkGreater(int);
int main()
{
	int no = 0;
	BOOL b_ret = False;
	printf("Enter a number\n");
	scanf_s("%d", &no);
	b_ret = ChkGreater(no);
	if (b_ret == True)
	{
		printf("Greater");
	}
	else
	{
		printf("Smaller");
	}
	_getch();
	return 0;
}
BOOL ChkGreater(int num)
{
	if (num > 100)
	{
		return True;
	}
	else
	{
		return False;
	}
}