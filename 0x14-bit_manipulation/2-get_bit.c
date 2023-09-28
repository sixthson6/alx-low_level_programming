#include "main.h"

/**
 * get_bit - find bit of index in number
 * @n: number
 * @index: index
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (n == 0)
		return (0);

	while (n > 0)
	{
		if (index == count)
			return (n & 1);

		n >>= 1;
		count++;
	}
	return (-1);
}
