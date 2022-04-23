#include<stdio.h> 
#include<conio.h>
void RangeDisplay(int iStart, int iEnd)
{  
	if (iEnd < iStart)
	{
		printf("Invalid entry");
		goto end;
	}
	while (iStart <= iEnd)
	{
		printf("%d ", iStart );
		iStart++;
	}
end: {};
} 
int main() 
{
		int iValue1 = 0, iValue2 = 0;
		printf("Enter starting point\n");  
		scanf_s("%d", &iValue1);
		printf("Enter ending point\n");  
		scanf_s("%d", &iValue2);
		RangeDisplay(iValue1, iValue2);
		_getch();
		return 0;
	}