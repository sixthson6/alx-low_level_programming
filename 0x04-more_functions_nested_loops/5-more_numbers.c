#include <unistd.h>
#include "main.h"

/**
 * more_numbers - 1 to 14 times 10
 * Return: (void)
 */
void more_numbers(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
		if (i > 9)
		{
			_putchar(i / 10 + '0');
		}
		_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
