#include <unistd.h>
/**
 * _putchar.c - print char
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
