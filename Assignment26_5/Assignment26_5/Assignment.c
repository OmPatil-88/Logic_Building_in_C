#include<stdio.h>
#include<conio.h>
void Display(char ch)
{
	printf("Octal=0%o\nDecimal=%d\nHexadecimal=0x%x", ch, ch, ch);
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