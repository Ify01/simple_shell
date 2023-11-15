#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - fork
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t child_pid;
	int status;
	char *args[] = {"ls", "-l", "/tmp", NULL};
	int f;

	for (f = 0; f < 5; f++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
	}
	if (child_pid == 0)
	{
		execve("/usr/bin/ls", args, NULL);
		perror("Error:");
		exit(1);
	}
	else
	{
		wait(&status);
	}
}
