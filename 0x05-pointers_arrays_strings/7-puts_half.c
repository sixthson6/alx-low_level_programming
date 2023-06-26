#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of string
 * @str: sting input
 * Return: void
 */
void puts_half(char *str)
{
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (strlen(str) % 2 == 0)
		{
			if (i >= (strlen(str)) / 2)
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i > (strlen(str) - 1) / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
