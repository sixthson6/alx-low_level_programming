#include <unistd.h>
#include "main.h"
/**
 * main - print the alphabets using _putcahr
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
