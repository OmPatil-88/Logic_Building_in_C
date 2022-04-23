#include<conio.h>
#include<stdio.h>
void strlen(char *str1, char *str2) 
{    
	int icnt = 0;
	while (*str1 != '\0')
	{
		icnt++;
		str1 = str1++;
	}
	printf("%d ", icnt);
	icnt = 0;
	while (*str2 != '\0')
	{
		icnt++;
		str2 = str2++;
	}
	printf("%d ", icnt);
} 
int main()
{
	char arr[50] = "Marvellous";
	char brr[50] = "Infosystems";
	strlen(arr, brr);
	_getch();
	return 0;
}