#include "main.h"

/**
 * print_binary - print binary representation of decimal num
 * @n: decimal
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int bit;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (n > 0)
	{
		bit = n & 1;
		printf("%d", bit);
		n >>= 1;
	}
}
