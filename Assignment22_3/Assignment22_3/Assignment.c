#include<conio.h>
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
#define BOOL int
BOOL Display(int Arr[], int iLength)
{
	int icnt = 0;
	while (iLength>0)
	{
		if (Arr[icnt] == 11)
		{
			return TRUE;
		}
		icnt++;
		iLength--;
	}
	return FALSE;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *p = NULL;
	printf("Enter number of elements in list \n");
	scanf_s("%d", &iSize);
	p = (int *)malloc(iSize * sizeof(int));
	if (p == NULL)
	{
		printf("Enable to allocate memory\n");
		return -1;
	}
	printf("Enter %d elements\n", iSize);
	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf_s("%d", &p[iCnt]);
	}
	iRet = Display(p, iSize);
	if (iRet)
	{
		printf("11 is Present");
	}
	else
	{
		printf("11 is Absent");
	}
	
	free(p);
	_getch();
	return 0;
}