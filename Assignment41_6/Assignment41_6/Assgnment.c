#include<conio.h>
#include<stdio.h>
void Pattern(int iNo)
{
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