#include<conio.h>
#include<stdio.h>
void DisplayConvert(char CValue)
{
	if (CValue>='a' && CValue<='z')
	{
		printf("%c",CValue-32);
	}
	else if (CValue >= 'A' && CValue <= 'Z')
	{
		printf("%c",CValue+32);
	}
}
int main()
{
	char cValue = '\0';
	printf("Enter character\n");
	scanf_s("%c", &cValue);
	DisplayConvert(cValue);
	_getch();
	return 0;
}