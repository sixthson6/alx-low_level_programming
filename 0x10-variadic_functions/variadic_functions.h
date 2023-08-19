#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - struct for print_all fucntion
 * @sym: string holder
 * @_print: func pointer to func_****_print functions
 */

typedef struct printer
{
	char *sym;
	void (*_print)(va_list args);
} print_funct;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void funct_char_print(va_list args);
void funct_int_print(va_list args);
void funct_float_print(va_list args);
void funct_string_print(va_list args);
void print_all(const char * const format, ...);


#endif
