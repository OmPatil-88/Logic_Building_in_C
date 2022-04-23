#include<conio.h>
#include<stdio.h>
#include<malloc.h>
int Maximum(int Arr[], int iLength)
{
	int icnt = 0, imax = 0;
	while (iLength>0)
	{
		if (Arr[icnt] >imax)
		{
			imax = Arr[icnt];
		}
		icnt++;
		iLength--;
	}
	return imax;
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
	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf_s("%d", &p[iCnt]);
	}
	iRet = Maximum(p, iSize);
	printf("Result is %d", iRet);
	free(p);
	_getch();
	return 0;
}