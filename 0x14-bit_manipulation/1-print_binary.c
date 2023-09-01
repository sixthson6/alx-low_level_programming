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
	unsigned long int max_val;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	max_val = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (n > 0 && n != max_val)
	{
		bit = n & 1;
		_putchar(bit + '0');
		n >>= 1;
	}
}
