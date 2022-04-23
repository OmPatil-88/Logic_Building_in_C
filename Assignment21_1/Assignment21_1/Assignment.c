#include<conio.h>
#include<stdio.h>
#include<malloc.h>
int Difference(int Arr[], int iLength) 
{ 
	int icnt = 0, iEsum = 0, iOsum = 0;
	while (iLength>0)
	{
		if (Arr[icnt] % 2 == 0)
		{
			iEsum = iEsum + Arr[icnt];
		}
		else
		{
			iOsum = iOsum + Arr[icnt];
		}
		icnt++;
		iLength--;
	}
	return iEsum - iOsum;
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
	printf("Enter %d elements ", iSize);
	for (iCnt = 0; iCnt < iSize;iCnt++)
	{
		scanf_s("%d", &p[iCnt]);
	}
	iRet = Difference(p, iSize);
	printf("Result is %d", iRet);
	free(p);
	_getch();
	return 0;
}