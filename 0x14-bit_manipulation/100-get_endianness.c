#include "main.h"

/**
 * get_endianness - get endianness of a system
 *
 * Return: 0(big endian) 1(little endian)
 */

int get_endianness(void)
{
	unsigned int value;
	unsigned char *byte_ptr;

	value = 1;
	byte_ptr = (unsigned char*)&value;

	if (*byte_ptr == 1)
		return (1);
	else
		return (0);
}
