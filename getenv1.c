#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char *homeEnv = getenv("HOME");

	printf("%s\n", homeEnv);
}
