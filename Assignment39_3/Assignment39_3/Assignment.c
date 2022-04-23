#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int strlen(char *str)
{
	int cnt=0;
	while (*str != '\0')
	{
		str++;
		cnt++;
	}
	return cnt;
}
void get_lower(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
}
BOOL strCmpCX(char *str1, char *str2) 
{  
	if (strlen(str1) != strlen(str2))
	{
		return FALSE;
	}
	get_lower(str1);
	get_lower(str2);
	while (*str1!='\0')
	{
		if (*str1 != *str2)
		{
			return FALSE;
		}
		str1++;
		str2++;
	}
	return TRUE;
} 
int main()
{
	char arr[50] = "MarvelloUS";
	char brr[50] = "MARveLLous";
	if (strCmpCX(arr, brr))
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	_getch();
	return 0;
}