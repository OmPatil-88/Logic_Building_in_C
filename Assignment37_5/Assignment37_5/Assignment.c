#include<conio.h>
#include<stdio.h>
void StrCap(char *src)
{  // Copy the contents into dest by removing extra white spaces 
	while (*src == 32)
	{
		src = src++;
	}
	if (97 <= *src && *src <= 122)
	{
	*src = *src - 32;
	}
	while (*src != '\0')
	{
		if (*src == 32 && *(src + 1) != 32 && 97 <= *(src+1) && *(src+1) <= 122)
		{
			*(src + 1) = *(src + 1) - 32;
		}
		src++;
	}
}
int main() {
	char arr[50] = "marvellous infosystems by Piyush khairnnar";
	StrCap(arr);    
	printf("%s", arr); // Marvellous Infosystems By Piyush Khairnnar
	_getch();
	return 0; 
} 
