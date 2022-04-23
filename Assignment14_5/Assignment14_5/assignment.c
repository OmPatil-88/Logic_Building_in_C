#include<stdio.h> 
#include<conio.h>
void Pattern(int iNo)
{
	int icnt = 1;
	while (iNo>0)
	{
		printf("%d ", icnt*2);
		icnt++;
		iNo--;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number of elements\n");
	scanf_s("%d", &iValue);
	Pattern(iValue);
	_getch();
	return 0;
}