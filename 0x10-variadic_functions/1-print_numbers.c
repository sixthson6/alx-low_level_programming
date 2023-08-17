#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print number
 * @seperator: string between number
 * @n: count
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	int num;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);
	

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(arg);

	printf("\n");
}
