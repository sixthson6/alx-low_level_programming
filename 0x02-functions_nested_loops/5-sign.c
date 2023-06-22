#include <unistd.h>
#include "main.h"
#include <limits.h>
/**
 * print_sign - print sign of number
 * @i: input
 * Return: 0 or 1
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('\n');
	if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
	if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
