#include "shell.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

/**
 * read_line - char
 *
 * Return: succes or error
 */

char *read_line(void)
{
	char *line = NULL;

	size_t len = 0;
	ssize_t y;

	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
	y = getline(&line, &len, stdin);
	if (y == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
