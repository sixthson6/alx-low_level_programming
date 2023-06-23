#include <unistd.h>
#include "main.h"

/**
 * print_line - print straight line using _
 * @n: length of line
 * Return: (void)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
