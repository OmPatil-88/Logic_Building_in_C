#include<conio.h>
#include<stdio.h>
void StrCpyX(const char *src, char *dest)
 {  // Copy the contents into dest by removing extra white spaces 
	while (*src == 32)
	{
		src = src++;
	}
	while (*src != '\0')
	{
		while (*(src) == 32  )
		{
			src = src + 1;
			if (*(src) != 32)
			{
				*dest = 32;
				dest++;
			}
		}
		*dest = *src;
		src++;
		dest++;
	}
} 
	int main()
	{
		char arr[30] = "   Marvellous     multi   OS ";
		char brr[30]="\0";  // Empty string  
		StrCpyX(arr,brr);   
		printf("%s",brr); // Marvellous multi OS  
		_getch();
		return 0; 
	}