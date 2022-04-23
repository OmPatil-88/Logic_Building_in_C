#include<conio.h>
#include<stdio.h>
void StrCpyX(char *src, char *dest) 
{  // Fileter
	int icnt = 0;
	while(src[icnt] != '\0')
	{   dest[icnt] = src[icnt];
	    icnt++;    
	}
} 
int main()
{
		char arr[20] = "Marvellous Multi OS";
		char brr[30]="\0";  // Empty string 
		StrCpyX(arr, brr);
		printf("%s", brr);  // Marvellous Multi OS 
		_getch();
		return 0;
	}