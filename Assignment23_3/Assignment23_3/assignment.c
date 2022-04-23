#include<conio.h>
#include<stdio.h>
#include<malloc.h>
int LastOcc(int Arr[], int iLength, int iNo)
{
	int icnt = 0, icount = -1;
	while (iLength>0)
	{
		if (Arr[icnt] == iNo)
		{
			icount=icnt;
		}
		icnt++;
		iLength--;
	}
	return icount;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, inum;
	int *p = NULL;
	printf("Enter number of elements in list \n");
	scanf_s("%d", &iSize);
	printf("Enter number \n");
	scanf_s("%d", &inum);
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
	iRet = LastOcc(p, iSize, inum);
	printf("Result is %d", iRet);
	free(p);
	_getch();
	return 0;
}