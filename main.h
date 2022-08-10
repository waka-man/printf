#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int get_printer(const char *format, format_t *spec, va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int print_dec(va_list arg);

/**
 * struct fmt - struct for selecting
 * correct formatting function based on
 * format specifier
 * @c: pointer to the first char in the first param
 * @f: function pointer to select correct funtion
 */

typdef struct fmt
{
	char *c;
	int (*f)();
} format_t;

#endif /* MAIN_H */
