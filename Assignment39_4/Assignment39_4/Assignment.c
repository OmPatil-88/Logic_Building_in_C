#include<conio.h>
#include<stdio.h>
void strCatX(char *src, char *dest) 
{   
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != 0)
	{
		*dest = *src;
		src += 2;
		dest++;
	}
} 
int main()
{
	char arr[50] = "Marvellous";
	char brr[50] = "Infosystems";
	strCatX(brr, arr);
	printf("%s",arr);
	_getch();
	return 0;
}