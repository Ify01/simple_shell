#include "shell.h"

/**
 * _getenv - get environ
 * @val: val
 * Retrun: successs or error
 */

char *_getenv(char *var)
{
	char *tmp, *id, *val, *env;
	int i;

	for (i = 0; environ[i]; i++)
	{
		tmp = _strdup(environ[i]);
		id = strtok(tmp, "=");
		if (_strcmp(id, var) == 0)
		{
			val = strtok(NULL, "\n");
			env = _strdup(val);
			free(tmp);
			return (env);
		}
		free(tmp), tmp = NULL;
	}
	return (NULL);
}
