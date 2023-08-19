#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * funct_char_print - print char
 * @args: arg to print
 * Return: Nothing
 */

void funct_char_print(va_list args)
{
	int letter;

	letter = (char) va_arg(args, int);
	printf("%c", letter);
}

/**
 * funct_int_print - print int
 * @args: arg to print
 * Return: Nothing
 */

void funct_int_print(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * funct_float_print - print float
 * @args: arg to print
 * Return: Nothing
 */

void funct_float_print(va_list args)
{
	double flt;

	flt = va_arg(args, double);
	printf("%f", flt);
}

/**
 * funct_string_print - print string
 * @args: arg to print
 * Return: Nothing
 */

void funct_string_print(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}

/**
 * pirnt_all - print all format types c,i,f,s
 * @format: format specifyers
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator;
	print_funct functions[] = {
		{"c", funct_char_print},
		{"i", funct_int_print},
		{"f", funct_float_print},
		{"s", funct_string_print}
	};

	separator = "";

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].sym)))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", separator);
			functions[j]._print(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(args);
}
