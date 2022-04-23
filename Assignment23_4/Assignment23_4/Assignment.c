#include<conio.h>
#include<stdio.h>
#include<malloc.h>
int Range(int Arr[], int iLength, int iStart,int iend)
{
	if (iend < iStart)
	{
		printf("Invalid Entry");
		return -1;
	}
	int icnt = 0;
	while (iLength>0)
	{
		if (iStart < Arr[icnt] && Arr[icnt] < iend)
		{
			printf("%d ", Arr[icnt]);
		}
		icnt++;
		iLength--;
	}
	return 0;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iValue1=0,iValue2=0;
	int *p = NULL;
	printf("Enter number of elements in list \n");
	scanf_s("%d", &iSize);
	printf("Enter the starting point\n");
	scanf_s("%d", &iValue1);
	printf("Enter the ending point\n");
	scanf_s("%d", &iValue2);
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
	Range(p, iSize, iValue1, iValue2);
	free(p);
	_getch();
	return 0;
}