#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the environment
 * @ac: argument
 * @av: arguemnt
 * @env: evironment
 * @environ: character
 * Return: Always 0.
 */

int main(int ac, char **av, char **env, char **environ)
{
	printf("%p\n%p\n", environ, env);
	return (0);
}
