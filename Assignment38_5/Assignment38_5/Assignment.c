#include<conio.h>
#include<stdio.h>
void Pattern(char *str)
{
	char *i = str, *j = str;
	while (*i != '\0')
	{
		while (*j != '\0')
		{
			if (65 <= *j && *j <= 90)
			{
				printf("%c ", *j+32);
			}
			else
			{
				printf("%c ", *j);

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