#include<conio.h>
#include<stdio.h>
void StrCpySmall(char *src, char *dest)
{
	while (*src != '\0')
	{
		if ((97 <= *src) && (*src <= 122) || *src==32)
		{
			*dest = *src;
			dest++;
		}

		src++;
	}
}
int main()
{
	char arr[30] = "Marvellous multi OS";
	char brr[30] = "\0";  // Empty string    
	StrCpySmall(arr, brr);
	printf("%s", brr); // MMOS   
	_getch();
	return 0;
}