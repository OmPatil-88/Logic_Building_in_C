#include<conio.h>
#include<stdio.h>
void Pattern(char *str)
{
	char *i = str, *j = str;
	while (*i != '\0')
	{
		while (*j != '\0')
		{
			if (i>=j)
			{
				printf("%c ", *j);
			}
			else
			{
				printf(" ");

			}
			j++;
		}
		printf("\n");
		j = str;
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