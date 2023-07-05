#include <unistd.h>
#include "main.h"
/**
 * _putchar - its putchar
 *
 * Return: 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
