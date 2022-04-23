#include<conio.h>
#include<stdio.h>
void StrCpysmall(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		if (65 <= *dest && *dest <= 90)
		{
			*dest = *dest + 32;
		}
		src++;
		dest++;
	}
}
int main()
{
	char arr[30] = "Marvellous Python 3";
	char brr[30] = "\0";   // Empty string   
	StrCpysmall(arr, brr);
	printf("%s",brr);  // nohtyP suollevraM
	_getch();
	return 0;
}