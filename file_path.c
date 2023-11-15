#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

void file_path(char *path)
{
	if (access(path, F_OK) == 0)
	{
		printf("%s: FOUND\n", path);
	}
	else
	{
		printf("%s: NOT FOUND\n", path);
	}
}

int main(void)
{
	char *buffer = NULL;
	size_t bufferSize = 0;
	char *token;

	while(1)
	{
		write(1, ":) ", 4);
		getline(&buffer, &bufferSize, stdin);
		token = strtok(buffer, " \t\n");
		if (strcmp(token, "which") == 0)
		{
			token = strtok(NULL, " \t\n");
			while (token)
			{
				file_path(token);
				token = strtok(NULL, " \t\n");
			}
		}
		else
		{
			write(1, "PATH NOT FOUND\n", 17);
		}
	}
	return (0);
}
