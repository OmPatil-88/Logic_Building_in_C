#include<conio.h>
#include<stdio.h>
void StrCpyCap(char *src, char *dest) 
{  
	while(*src != '\0')  
	{   
		if((65<=*src) && (*src<=90))
	    {   
			*dest = *src;
			dest++;
	    }   
		
		src++;
	}  
}
int main() 
{
	char arr[30] = "Marvellous Multi OS";  
	char brr[30]="\0";  // Empty string    
	StrCpyCap(arr,brr); 
	printf("%s", brr); // MMOS   
	_getch();
	return 0; 
}