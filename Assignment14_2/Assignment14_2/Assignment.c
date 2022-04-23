#include<stdio.h> 
#include<conio.h>
void Pattern(int iNo)
{
	while(iNo>0)
	{
		printf("%d # ", iNo);
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