#include<conio.h>
#include<stdio.h>
int WordCount(char *str) 
{
	int iCnt = 0;    
	if (str == NULL) 
	{
		return -1; 
	}       
	while (*str!='\0')
	{
		while (*str==' ')
		{
			str++;
		}
		if ((*(str + 1) == ' ' && *str != ' ')||(*(str+1)=='\0'&& *str!=' '&& *str!='\0'))//considering only one space between words(if any problem with condition debug by deleting last condition
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char arr[100] = "      Marvellous    Multi   OS                      Infosystems    ";
	printf("%d", WordCount(arr));
	_getch();
	return 0;
}