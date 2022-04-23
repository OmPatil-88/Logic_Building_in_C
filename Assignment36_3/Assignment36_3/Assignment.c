#include<conio.h>
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL StrCmpX(char *src, char * dest,int iCnt)
{  // Filter  
	while ((*src != '\0') && (*dest != '\0') && iCnt>0)
	{
		if (*src != *dest)
		{
			return FALSE;
		}
		iCnt--;
		src++;
		dest++;
	}
	if (iCnt==0||(*src=='\0'&&*dest=='\0'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	BOOL bret = TRUE;
	char arr[50] = "\0";
	char brr[30] = "\0";
	printf("Enter Source String\n");
	gets(arr);
	printf("Enter Destination  String\n");
	gets(brr);
	bret = StrCmpX(arr, brr,10);
	if (bret == TRUE)
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
