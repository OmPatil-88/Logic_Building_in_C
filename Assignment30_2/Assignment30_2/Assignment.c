#include<conio.h>
#include<stdio.h>
void StrNCpyX(char *src, char *dest,int iCnt)
{  // Fileter
	int icnt = 0;
	while (src[icnt] != '\0' && iCnt!=0)
	{
		dest[icnt] = src[icnt];
		icnt++;
		iCnt--;
	}
}
int main()
{
	char arr[20] = "Marvellous Multi OS";
	char brr[30] = "\0";  // Empty string 
	StrNCpyX(arr, brr,10);
	printf("%s", brr);  // Marvellous Multi OS 
	_getch();
	return 0;
}