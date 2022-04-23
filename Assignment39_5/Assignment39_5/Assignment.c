#include<conio.h>
#include<stdio.h>
void strRev(char *src, char *dest)
{
	char *temp = src;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		src++;
	}
	while (temp!=src)
	{
		src--;
		*dest = *src;
		dest++;
	}
}
int main()
{
	char arr[50] = "Marvellous";
	char brr[50] = "Python";
	strRev(brr, arr);
	printf("%s", arr);
	_getch();
	return 0;
}