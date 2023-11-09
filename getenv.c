#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_getenv(const char *name)
{
	extern char **environ;
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
	return(NULL);
}

void main(void)
{
	char *homeEnv = _getenv("HOME");

	printf("%s\n", homeEnv);
}
