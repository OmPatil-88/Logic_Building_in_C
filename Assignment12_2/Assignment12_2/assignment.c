#include<stdio.h> 
#define TRUE 1 
#define FALSE 0 
typedef int BOOL;
BOOL ChkZero(int iNo)
{ 
	while (iNo>0)
	{
		if (iNo % 10 == 0)
		{
			return TRUE;
	    }
		iNo /= 10;
	}
	return FALSE;
} 
int main()
{  int iValue = 0;  
   BOOL bRet = FALSE;
   printf("Enter number\n");  
   scanf_s("%d", &iValue);
	bRet = ChkZero(iValue);
	if (bRet == TRUE)
	{ 
		printf("It Contains Zero");
	}

	else 
	{ 
		printf("There is no Zero");
	}
	_getch();
	return 0; 
}