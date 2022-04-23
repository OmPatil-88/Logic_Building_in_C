#include<conio.h>
#include<stdio.h>
void strlen(char *str1, char *str2)
{
	int icnt = 0;
	while (*str1 != '\0')
	{
		if ('A' <= *str1 && *str1 <= 'Z')
		{
			icnt++;
		}
		
		str1 = str1++;
	}
	printf("%d ", icnt);
	icnt = 0;
	while (*str2 != '\0')
	{
		if ('A' <= *str2 && *str2 <= 'Z')
		{
			icnt++;
		}
		str2 = str2++;
	}
	printf("%d ", icnt);
}
int main()
{
	char arr[50] = "MarvelLoUS";
	char brr[50] = "InfOsyStems";
	strlen(arr, brr);
	_getch();
	return 0;
}