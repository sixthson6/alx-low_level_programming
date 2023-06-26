#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - reverse print
 * @s: input param
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
