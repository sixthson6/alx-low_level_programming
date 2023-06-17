#include <stdio.h>

/**
 * main - print size of variable types
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'r';

	int b = 4;

	long int c = 88;

	long long int d = 999;

	float e = 5.33;

	printf("Size of a char: %c bytes(s)\n", sizeof(a));
	printf("Size of an int: %d bytes(s)\n", sizeof(b));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(d));
	printf("Size of a float: %zu bytes(s)\n", sizeof(e));

	return (0);
}
