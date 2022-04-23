#include<conio.h>
#include<stdio.h>
int CountChar(char *str, char ch)
{
	int icnt = 0,icount=-1;
	while (str[icnt]!='\0')
	{
		if (str[icnt] == ch)
		{
			icount = icnt;
		}
		icnt++;
	}
	return icount;
}
int main()
{
	char arr[20], cvalue = '\0';
	int iRet = 0;
	printf("Enter string\n");
	gets(arr);
	printf("Enter Character\n");
	scanf_s("%c", &cvalue);
	iRet = CountChar(arr, cvalue);
	printf("%d", iRet);
	_getch();
	return 0;
}