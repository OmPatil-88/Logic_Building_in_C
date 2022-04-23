#include<stdio.h>
void NonFact(int no);
int main()
{
	int no = 0;
	printf("Enter number\n");
	scanf_s("%d", &no);
	NonFact(no);
	return 0;
}
void NonFact(int num)
{
	int i = 0,sum=0;
	for (i = 1; i <= num; i++)
	{
		if (num % i != 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	scanf_s("%d", &i);

}