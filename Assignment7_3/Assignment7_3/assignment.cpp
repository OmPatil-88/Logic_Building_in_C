#include<stdio.h> 
#include<conio.h>
void Display(int iNo)
{  
	int icon;
	icon = iNo +1;
	iNo = -iNo;
	while (iNo<icon)
	{
		printf("%d ", iNo);
		iNo++;
	}

} 
int main()
{
		int iValue = 0; 
		printf("Enter number\n");  
		scanf_s("%d", &iValue);
		Display(iValue);
		_getch();
		return 0;
}