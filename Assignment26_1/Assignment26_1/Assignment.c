#include<conio.h>
#include<stdio.h>
void DisplayASCII()
{  
	char ch=0;
	printf("Dec\t Hex\t Oct\t Char\t\n");
	for (char ch = 0; ch < 127; ch++)
	{
		printf("%d\t %c\t %o\t %x\t \n",ch,ch,ch,ch);
	}
} 
	int main()
	{ 
		DisplayASCII();
		_getch();
		return 0; 
	}