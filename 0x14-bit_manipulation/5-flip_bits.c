#include "main.h"

/**
 * flip_bits - find number of bits needed to be flipped to get
 * form one number to another
 * @n: num1
 * @m: num2
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit1, bit2, count = 0;

	if (n == 0 || m == 0)
		return (0);

	while (n > 0 && m > 0)
	{
		bit1 = n & 1;
		bit2 = m & 1;

		if (bit1 ^ bit2)
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
