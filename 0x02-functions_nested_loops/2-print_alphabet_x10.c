#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
