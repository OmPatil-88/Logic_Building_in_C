#include<stdio.h>
void Factdiff(int no);
int main()
{
	int no = 0;
	printf("Enter number\n");
	scanf_s("%d", &no);
	Factdiff(no);
	return 0;
}
void Factdiff(int num)
{
	int i = 0,s_nfact=0,s_fact=0;
	for (i = 1; i < num; i++)
	{
		if (num % i != 0)
		{
			s_nfact = s_nfact + i;
		}
		else
		{
			s_fact = s_fact + i;
		}

	}
	printf("%d", s_fact - s_nfact);
	scanf_s("%d", &i);

}