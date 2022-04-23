#include<conio.h>
#include<stdio.h>
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
	while (iNo>0)
	{
		int temp = iNo % 10;
		while (temp>0)
		{
			if (temp == (iNo % 10))
			{
				printf("%d ", temp);
			}
			else
			{
				printf("# ");
			}
			
			temp--;
		}
		printf("\n");
		iNo /= 10;
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