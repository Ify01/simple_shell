#include <stdio.h>
#include <stdlib.h>

/**
 * main - getenv
 *
 * Return: Always 0.
 */

void main(void)
{
	char *homeEnv = getenv("HOME");

	printf("%s\n", homeEnv);
}
