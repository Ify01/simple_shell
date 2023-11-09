#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

void owntok(const char *str, char delimeter)
{
	int strLength = strlen(str);
	char letter[strLenght + 1];
	int i, j;

	for (i = 0; i <= strLenght; i++)
	{
		j = 0;
		if (str[i] == delimeter || str[i] == '\0')
			letter[j] = '\0';
		if (j = 0)
		{
			printf("%s\n", letter);
			j = 0;
		}
		else
		{
			letter[j++] = str[i];
		}
	}
}
