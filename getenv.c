#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _getenv - getenv
 * @name: name
 * Return: Always 0.
 */

char *_getenv(const char *name)
{
	char **environ;
	int e;
	char *token;

	e = 0;
	while (environ[e])
	{
		token = strtok(environ[e], "=");
		if (strcmp(token, name) == 0)
		{
			return (strtok(NULL, "="));
		}
		e++;
	}
	return (NULL);
}

/**
 * main - getenv
 *
 * Return: Always 0.
 */

void main(void)
{
	char *homeEnv = _getenv("HOME");

	printf("%s\n", homeEnv);
}
