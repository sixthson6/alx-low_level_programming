#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print any type of arg
 * @format: list of args
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0;
	char c_arg;
	int i_arg;
	double f_arg;
	char *s_arg;

	va_start(arg, format);

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				c_arg = va_arg(arg, int);
				printf("%c", c_arg);
				break;
			case 'i':
				i_arg = va_arg(arg, int);
				printf("%d", i_arg);
				break;
			case 'f':
				f_arg = va_arg(arg, double);
				printf("%f", f_arg);
				break;
			case 's':
				s_arg = va_arg(arg, char *);
				if (s_arg == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s_arg);
				}
				break;
		}
		i++;
	}

	va_end(arg);

	printf("\n");
}
