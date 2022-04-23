#include<stdio.h>
#include<conio.h>
void Display(char ch)
{
	if (65 <= ch && ch <= 90)
	{
		while (ch <= 90)
		{
			printf("%c ",ch);
			ch++;
		}
	}
	else if (97 <= ch && ch <= 122)
	{
		while (ch <= 122)
		{
			printf("%c ", ch);
			ch++;
		}
	}
	else
	{
		printf(" ");
	}
}
int main()
{
	char cValue = '\0';
	printf("Enter the character\n");
	scanf_s("%c", &cValue);
	Display(cValue);
	_getch();
	return 0;
}