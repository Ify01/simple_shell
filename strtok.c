#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int j;
	/*char str[] = "Alx program is certainly not for the weak";*/
	char *str = "Alx program is certainly not for the weak";
	char *strcopy = malloc(sizeof(char) * strlen(str));
	char delim[6] = " ";
	char *parts;

	strcpy(strcopy, str);
	parts = strtok(strcopy, delim);
	/*printf("%p\n%p\n", str, parts);*/

	while (parts != NULL)
	{
		printf("%s\n", parts);
		parts = strtok(NULL, delim);
	}

	for (j = 0; j < 42; j++)
	{
		if (strcopy[j] == '\0')
			printf("\\0");
		else
			printf("%c", strcopy[j]);
	}

	return (0);
}
