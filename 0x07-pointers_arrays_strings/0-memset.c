#include "main.h"
#include <stddef.h>
/**
 * _memset - replace a byte with a constant byte for n
 * @s: start of memory(pointer)
 * @b: constant byte
 * @n: number of bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i;

	for (i = s; i < s + n; i++)
	{
		*i = b;
	}
	return (s);
}
