#include<conio.h>
#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		if (97<=*dest && *dest <=122)
		{
			*dest = *dest - 32;
		}
		src++;
		dest++;
	}
}


int main()
{
	char arr[30] = "Marvellous Python 3";
	char brr[30] = "\0";   // Empty string   
	StrCpyX(arr, brr);
	printf("%s", brr);  // nohtyP suollevraM
	_getch();
	return 0;
}