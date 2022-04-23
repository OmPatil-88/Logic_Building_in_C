#include<conio.h>
#include<stdio.h>
int CountCapital(char *str)
{
	int iCnt = 0;
	// Fileter 
	while (*str != '\0')
	{
		if (65 <= *str && *str <= 90)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main() 
{
	char arr[20];  int iRet = 0;
		printf("Enter string\n");  
		gets(arr);
		iRet = CountCapital(arr);
		printf("%d", iRet);
		_getch();
		return 0;
}