#include "shell.h"

/**
 * main - main
 * @ac: argument
 * @argv: arguemnt
 * Return: Always 0.
 */

int main(int ac, char **argv)
{
	char *line = NULL, **command = NULL;
	int status = 0;
	(void) ac;

	while (1)
	{
		line = read_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			return (status);
		}
		command = tokenizer(line);
		if (!command)
			continue;

		status = _execute(command, argv);

	}
}
