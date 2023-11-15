#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - PID
 * @environ: character
 * Return: Always 0.
 */

int main(char **environ)
{
	int e = 0;

	while (environ[e] != NULL)
	{
		printf("%s\n", environ[e]);
		e++;
	}

}
