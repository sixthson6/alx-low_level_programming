#include <unistd.h>
/**
 * _putchar - function  prototype
 * @c: input variable c
 * Return: 0 (Success)
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 * main - commanding fucntion
 * Return: 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
