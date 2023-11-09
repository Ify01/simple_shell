#include <stdio.h>
#include <stdlib.h>

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
