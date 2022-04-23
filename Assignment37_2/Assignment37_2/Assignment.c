#include<conio.h>
#include<stdio.h>
int WordCount(char *str)
{
	int iMax = 0,iCnt=0;
	if (str == NULL)
	{
		return -1;
	}
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			while ((*str == ' ') && (*str != '\0'))
			{
				str++;
			}
		}
		else
		{
			iCnt++;
			if (*(str+1)==' '||*(str+1)=='\0')
			{
				if (iCnt > iMax)
				{
					iMax = iCnt;
				}
				iCnt = 0;
		    }
		}
		str++;
	}
	return iMax;
}
int main()
{
	char arr[100] = "Marvellous Multi OS Infosystems";
	printf("%d", WordCount(arr));
	_getch();
	return 0;
}