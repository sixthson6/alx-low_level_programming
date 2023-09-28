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
	unsigned long int bits, count = 0;

	if (n == 0 || m == 0)
		return (0);

	bits = n ^ m;

	while (bits > 0)
	{
		count += bits & 1;
		bits >>= 1;
	}
	return (count);
}
