#include<conio.h>
#include<stdio.h>
void StrCpyRev(char *src, char *dest) 
{ 
	char *temp = src;
	int iCnt = 0;
	while (*src!='\0')
	{
		iCnt++;
		src++;
	}
	src--;
	while (iCnt > 0)
	{
			*dest = *src;
			src--;
			dest++;
			iCnt--;
	}
}

 
int main() 
{
		char arr[30] = "Marvellous Python";  
		char brr[30]="\0";   // Empty string   
		StrCpyRev(arr,brr);   
		printf("%s",brr);  // nohtyP suollevraM
		_getch();
		return 0; 
} 