#include<conio.h>
#include<stdio.h>
int SchoolFees(int iStandard)
{
	switch (iStandard)
	{
	case 1:
		printf("\nfirst standard fees are 8900");
		break;
	case 2:
		printf("\nsecond standard Fess are 12790");
		break;
	case 3:
		printf("\nthird standard fees are 21000");
		break;
	case 4:
		printf("\nfourth standard fees are 23450");
		break;
	default:
		printf("\nWrong Input");
		break;
	}
	return 0;

}
int main()
{
	int iValue = 0;
	printf("Enter the Standard\n");
	scanf_s("%d", &iValue);
	SchoolFees(iValue);
	_getch();
}