#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @ac: argument
 * @av: arguemnt
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	printf("argv displays argv[]\n");

	while (*av != NULL)
	{
		printf("av = %s\n", *av);
		av++;
	}
	return (0);
}
