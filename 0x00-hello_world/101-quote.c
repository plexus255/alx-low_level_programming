#include <stdio.h>

/**
 * main - entry point
 * Description: print some strings and redirect output to stderr
 * Return: 1
 */

int main(void)
{
	char *p = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", p);

	return (1);
}
