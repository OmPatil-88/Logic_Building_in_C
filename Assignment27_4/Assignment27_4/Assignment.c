#include<conio.h>
#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char *str)
{
	int iCnt = 0;
	// Fileter 
	while (*str != '\0')
	{
		if (*str==65||*str==97|| *str == 69 || *str == 101|| *str == 73 || *str == 105|| *str == 79 || *str == 111|| *str == 85 || *str == 117)
		{
			return TRUE;
		}
		str++;
	}
	return FALSE;
}
int main()
{
	char arr[20];  
	BOOL iRet = 0;
	printf("Enter string\n");
	gets(arr);
	iRet = ChkVowel(arr);  
	if (iRet == TRUE)
	{ 
		printf("Contains Vowel"); 
	}
	else
	{
		printf("There is no Vowel"); 
	}
	_getch();
	return 0;
}