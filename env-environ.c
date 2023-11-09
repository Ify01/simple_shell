#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern char **environ;

int main(void)
{
	int e = 0;

	while (environ[e] != NULL)
	{
		printf("%s\n", environ[e]);
		e++;
	}

}
