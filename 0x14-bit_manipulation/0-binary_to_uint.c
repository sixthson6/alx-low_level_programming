#include "main.h"

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: string of 0s and 1s
 *
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	unsigned int weight = 1;
	int s_len;

	if (b == NULL)
		return (0);

	s_len = strlen(b);

	for (i = s_len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
			result += 0 * weight;
		else if (b[i] == '1')
			result += 1 * weight;
		else
			return (0);
		weight *= 2;
	}
	return (result);
}
