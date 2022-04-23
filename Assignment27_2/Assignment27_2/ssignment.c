#include<conio.h>
#include<stdio.h>
int CountSmall(char *str)
{
	int iCnt = 0;
	// Fileter 
	while (*str != '\0')
	{
		if (97 <= *str && *str <= 122)
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
	iRet = CountSmall(arr);
	printf("%d", iRet);
	_getch();
	return 0;
}