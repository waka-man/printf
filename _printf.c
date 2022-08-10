#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - similar like printf, prints formatted string to stdout
 * based on format specifier, which is the first parameter for this
 * variadic function
 * @format: a pointer to the first character in the first string
 * parameter
 * Return: number of chars processed, negative number (-1 in our case)
 * on failure
 */

int _printf(const char *format, ...)
{
	va_list arg; /** pointer to first argument **/
	int chars; /** variable to hold number of chars scanned **/

	format_t specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}
	/** Get args one by one and pass them to the printer getter function **/

	va_start(arg, format);
	chars = get_printer(format, specifiers, arg);

	va_end(arg);

	return (chars);
}
