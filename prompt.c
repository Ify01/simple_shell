#include <stdio.h>
#include <stdlib.h>

/**
 * main - prompt
 *
 * Return: Always 0.
 */

int main(void)
{
	size_t j = 0;
	char *buff = NULL;

	printf("$ ");
	getline(&buff, &j, stdin);
	printf("%s", buff);

	free(buff);

	return (0);
}
