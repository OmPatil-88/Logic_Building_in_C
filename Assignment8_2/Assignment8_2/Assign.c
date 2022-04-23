#include<stdio.h> 
#include<conio.h>
void Display(int iNo)
{
	switch (iNo)
	{
	default:
	{
		printf("Invalid Entry");
		break;
	}
	case -1:
	case 1:
	{ 
		printf("One");
		break;
	}
	case -2:
	case 2:
	{
		printf("Two");
		break;
	}
	case -3:
	case 3:
	{
		printf("Three");
		break;
	}
	case -4:
	case 4:
	{
		printf("Four");
		break;
	}
	case -5:
	case 5:
	{
		printf("Five");
		break;
	}
	case -6:
	case 6:
	{
		printf("Six");
		break;
	}
	case -7:
	case 7:
	{
		printf("Seven");
		break;
	}
	case -8:
	case 8:
	{
		printf("Eight");
		break;
	}
	case -9:
	case 9:
	{
		printf("Nine");
		break;
	}
	case 0:
	{
		printf("Zero");
		break;
	}

	}
}
int main() 
{
	int iValue = 0;
	printf("Enter number\n");
	scanf_s("%d", &iValue);
	Display(iValue);
	_getch();
	return 0;
}