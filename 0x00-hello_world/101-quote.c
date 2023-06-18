#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print a line to standard error
 * Return: 1 (returns a value of one - Success)
 */
int main(void)
{
	FILE *stderr_stream = stderr;

	char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr_stream, "%s", m);
	return (1);
}
