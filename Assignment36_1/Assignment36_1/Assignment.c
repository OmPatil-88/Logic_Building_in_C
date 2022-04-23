#include<conio.h>
#include<stdio.h>
void StrNCatX(char *src, char * dest, int iCnt) 
{  
	while(*src !='\0')
	{  
		src++;
	}
	*src = 32;
	src++;
	while ((*dest != '\0') && (iCnt != 0)) 
		{   
		*src = *dest;
		src++;
		dest++;
		iCnt--;
    	}   
	*dest = '\0';
}
   int main() 
   {
    char arr[50] = "Marvellous Infosystems";  
    char brr[30] = "Logic Building";
    StrNCatX(arr,brr,5);   
    printf("%s", arr);   // Marvellous Infosystems Logic    
	_getch();
    return 0; 
} 