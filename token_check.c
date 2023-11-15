#include "shell.h"

/**
 * tokenizer - toke string
 * @line: line
 * Return: success or error
 */


char **tokenizer(char *line)
{
	char *token = NULL;
	char *tmp = NULL;
	char **command = NULL;
	int y = 0, u = 0;

	if (!line)
		return (NULL);
	tmp = _strdup(line);
	token = strtok(tmp, DELIM);

	if (token == NULL)
	{
		free(line), line = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}
	while (token)
	{
		y++;
		token = strtok(NULL, DELIM);
	}
	free(tmp), tmp = NULL;

	command = malloc(sizeof(char *) * (y + 1));
	if (!command)
	{
		free(line), line = NULL;
		return (NULL);
	}
	token = strtok(line, DELIM);
	while (token)
	{
		command[u] = _strdup(token);
		token = strtok(NULL, DELIM);
		u++;
	}
	free(line), line = NULL;
	command[u] = NULL;
	return (command);

}
