#include "main.h"

/**
  * _putchar - putchar
  * @c: char
  * Return: no of bytes
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
