#include<conio.h>
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2
BOOL StrPallindrome(char *str)
{  // Filter  
	char *first, *last;
	first = str;
	last = str;
	while (*last != '\0')
	{
		last++;
	}
	last--;
	while (first <= last)
	{   // Swapping logic with case toggle 
	
		if (*first != *last)
		{
			return FALSE;
		}
		first++;
		last--;
	}
	return TRUE;
}
int main()
{
	BOOL bret;
	char arr[20] = "abcfcba";
	bret = StrPallindrome(arr);
	if (bret == TRUE)
	{
		printf("String is pallindrome\n");
	}
	else
	{
		printf("String is not pallindrome\n");
	}
	_getch();
	return 0;
}