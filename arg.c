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
	int j;
	int add;

	add = 0;

	printf("argc or ac = %d\n", ac);
	printf("argv displays argv[]\n");

	for (j = 0; j < ac; j++)
	{
		printf("argv[%d] = %s\n", j, av[j]);
		add += atoi(av[j]);
	}
	printf("add = %d\n", add);
	return (0);
}
