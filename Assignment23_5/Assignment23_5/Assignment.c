#include<conio.h>
#include<stdio.h>
#include<malloc.h>
int Product(int Arr[], int iLength)
{
	int icnt = 0, iOPrd = 1,icount=0;
	while (iLength>0)
	{
		if (Arr[icnt] % 2 != 0)
		{   
			iOPrd*= Arr[icnt];
			icount++;
		}
		icnt++;
		iLength--;
	}
	if (icount > 0)return iOPrd; else return 0;
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
	iRet = Product(p, iSize);
	printf("Result is\n%d", iRet);
	free(p);
	_getch();
	return 0;
}