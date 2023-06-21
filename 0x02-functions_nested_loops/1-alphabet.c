#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print the alphabets using _putcahr
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
