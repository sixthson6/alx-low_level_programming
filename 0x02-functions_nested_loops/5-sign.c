#include <unistd.h>
#include "main.h"
/**
 * print_sign - print sign of number
 * @i: input
 * Return: 0 or 1
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (i < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
