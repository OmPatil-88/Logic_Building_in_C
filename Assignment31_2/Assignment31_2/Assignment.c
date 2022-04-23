#include<conio.h>
#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
	while (*src != '\0')
	{
		if (*src != 32)
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
}


int main()
{
	char arr[30] = "Ma rve llous Pyth on";
	char brr[30] = "\0";   // Empty string   
	StrCpyX(arr, brr);
	printf("%s", brr);  // nohtyP suollevraM
	_getch();
	return 0;
}