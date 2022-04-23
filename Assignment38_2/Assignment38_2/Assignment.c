#include<conio.h>
#include<stdio.h>
void Pattern(char *str)
{
	char *i = str, *j = str;
	int I = 1, J = 1,icnt=0;
	while (*i != '\0')
	{
		icnt++;
		i = i++;
	}
	i = j;
	while (*i != '\0')
	{
		while (*j != '\0')
		{
			if (I+J<=(icnt+1))
			{
				printf("%c ", *j);
			}
			else
			{
				printf(" ");

			}
			J++;
			j++;
		}
		J = 1;
		printf("\n");
		j = str;
		I++;
		i++;
	}
}
int main()
{
	char src[50] = "Marvellous";
	Pattern(src);
	_getch();
	return 0;
}