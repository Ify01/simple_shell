#include "shell.h"

/**
 * _getpath - path
 * @command: command
 * Return: success or error
 */

char *_getpath(char *command)
{
	char *path_env, *full_cmd, *dir;
	struct stat st;

	path_env = _getenv("PATH");

	dir = strtok(path_env, ":");
	while(dir)
	{
		full_cmd = malloc(_strlen(dir) + _strlen(command) + 2);
		if (full_cmd)
		{
			_strcpy(full_cmd, dir);
			_strcat(full_cmd, "/");
			_strcat(full_cmd, command);
			if (stat(full_cmd, &st) == 0)
			{
				free(path_env);
				return (full_cmd);
			}
			free(full_cmd), full_cmd = NULL;

			dir = strtok(NULL, ";");
		}
	}
	free(pathe_env);
	return (NULL);
}
