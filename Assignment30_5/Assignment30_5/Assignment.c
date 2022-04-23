#include<conio.h>
#include<stdio.h>
void StrCatX(char *src, char * dest)
{   
	while(*src !='\0' )
	{
		src++;
	} 
	*src = 32;
	src++;
	while(*dest != '\0') 
	{ 
		*src = *dest;
		src++;
		dest++;
	} 
  
	*dest = '\0'; 
} 
int main() 
{ 
	char arr[50] = "Marvellous Infosystems";  
	char brr[30] = "Logic Building";
	StrCatX(arr, brr); 
	printf("%s", arr);   
	_getch();
	return 0; 
}
