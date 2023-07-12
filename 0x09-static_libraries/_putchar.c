#include <unistd.h>
#include "main.h"
/**
 * _putchar- print a char
 * @c: input char
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
