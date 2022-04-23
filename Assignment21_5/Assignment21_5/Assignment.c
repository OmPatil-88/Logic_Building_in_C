#include<conio.h>
#include<stdio.h>
#include<malloc.h>
void Display(int Arr[], int iLength)
{
	int icnt = 0;
	while (iLength>0)
	{
		if (Arr[icnt] % 11 == 0)
		{
			printf("%d ", Arr[icnt]);
		}
		icnt++;
		iLength--;
	}
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
	printf("Result is\n");
	Display(p, iSize);
	free(p);
	_getch();
	return 0;
}