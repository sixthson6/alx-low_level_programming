#include "main.h"

/**
 * print_binary - print binary representation of decimal num
 * @n: decimal
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int bit, max_i, i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	max_i = sizeof(unsigned long int) * 8;

	while (n > 0 && i < max_i)
	{
		bit = n & 1;
		_putchar(bit + '0');
		n >>= 1;
		i++;
	}
}
