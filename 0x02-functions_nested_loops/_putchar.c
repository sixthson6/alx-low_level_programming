#include <unistd.h>
/**
 * no main function
 * _putchar prototype function
 * Return nothing
 */
int _putchar(char c)
{
	write(1, &c, 1);
}
