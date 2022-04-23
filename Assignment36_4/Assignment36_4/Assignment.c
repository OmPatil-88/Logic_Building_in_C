#include<conio.h>
#include<stdio.h>
void StrRevTogX(char *str) 
{  // Filter  
	char temp='\0';  
	char *first,*last;  
	first = str;  
	last = str; 
	while (*last != '\0') 
	{
		last++; 
	} 
	last--;  
	while (first <= last) 
	{   // Swapping logic with case toggle 
		if (65 <= *last && *last <= 90)
		{
			*last += 32;
		}
		else if(97 <= *last && *last <= 122)
		{
			*last -= 32;
		}
		if (65 <= *first && *first <= 90)
		{
			*first += 32;
		}
		else if (97 <= *first && *first <= 122)
		{
			*first -= 32;
		}
		temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
} 
	int main() 
{
	char arr[50] = "Marvellous";
	StrRevTogX(arr);    
	printf("%s",arr); // SUOLLEVRAm
	_getch();
	return 0;
}