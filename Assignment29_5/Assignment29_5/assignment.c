#include<conio.h>
#include<stdio.h>
void StrRevX(char *str) 
{
	char ptr='\0';
	int iEnd = 0,istart=0;
	while (str[iEnd] != '\0')
	{
		iEnd++;
	}
	iEnd--;
	while (istart<iEnd)
	{
		ptr = str[istart];
		str[istart] = str[iEnd];
		str[iEnd] = ptr;
		istart++;
		iEnd--;
	}
	
} 
int main() {
		char arr[20];
		printf("Enter string\n");  
		gets(arr);
		StrRevX(arr);
		printf_s("Modified string is %s",arr);
		_getch();
		return 0;
	}