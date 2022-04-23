#include<conio.h>
#include<stdio.h>
void DisplaySchedule(char ch)
{
	switch (ch)
	{
	case 65:
	case 97:
		printf("Your exam at 7 AM");
		break;
	case 66:
	case 98:
		printf("Your exam at 8:30 AM");
		break;
	case 67:
	case 99:
		printf("Your exam at 9.20 AM");
		break;
	case 68:
	case 100:
		printf("Your exam at 10:30 AM");
		break;
	default:
		printf("Invalid option");
		break;
	}
}
int main()
{
	char cValue = '\0';
	printf("Enter the character\n");
	scanf_s("%c", &cValue);
	DisplaySchedule(cValue);
	_getch();
	return 0;
}