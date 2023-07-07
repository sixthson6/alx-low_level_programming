#include "main.h"
/**
 * _puts_recursive - implement puts using recursion
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	static int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
