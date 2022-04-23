#include<stdio.h>
#include<conio.h>
int main()
{
	char name[50];
	printf("Enter Full name\n");
	gets(name);
	printf("Your name is %s", name);
	gets(name);
	return 0;
}