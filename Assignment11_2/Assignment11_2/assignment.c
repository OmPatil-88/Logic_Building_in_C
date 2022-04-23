#include<stdio.h> 
#include<conio.h>
void RangeDisplayEven(int iStart, int iEnd) 
{
	if (iEnd < iStart)
	{
		printf("Invalid Range");
		goto end;
	}
	while (iStart<iEnd)
	{
		if (iStart % 2 == 0)
		{
			printf("%d ", iStart);
		}
		iStart++;
	}
end: {}
} 
int main() 
{
		int iValue1 = 0, iValue2 = 0;
		printf("Enter starting point\n");  
		scanf_s("%d", &iValue1);
		printf("Enter ending point\n");  
		scanf_s("%d", &iValue2);
		RangeDisplayEven(iValue1, iValue2);
		_getch();
		return 0;
}