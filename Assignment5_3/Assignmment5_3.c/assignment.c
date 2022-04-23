#include<stdio.h>
void NonFact(int no);
int main()
{
	int no=0;
	printf("Enter number\n");
	scanf_s("%d", &no);
	NonFact(no);
	return 0;
}
void NonFact(int num)
{
	int i = 0;
	for (i = 1; i <= num; i++)
	{
		if(num % i !=0)
		{ 
			printf("%d ",i);
		}
	}
	scanf_s("%d", &i);

}