#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Retrun: 1 (Success)
 */
int main(void)
{
	FILE *stderr_stream = stderr;
	fprintf(stderr_stream, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return 1;
}
