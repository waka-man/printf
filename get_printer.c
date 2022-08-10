#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_printer - Function that determines which function to
 * call from the printer functions based on the format
 * specifier passed to it, using the the array of format_t type
 * pointers matching a fomat specifier char  to a function pointer
 * pointing to the printer functions
 * @format: pointer to the first char of the first string param
 * @spec: pointer of type struct format_t for specifier matching
 * @arg: arguments passed to our _printf function, type va_list
 * Return: number of chars proccessed from the string *format supplied
 * -1 for error
 */

int get_printer(const char *format, format_t *spec, va_list arg)
{
	int chars = 0;
	int index = 0;
	int jndex = 0;
	char string;

	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			string = format[index];

			while (spec[jndex].c && string != *(spec[jndex].c))
			{
				jndex++;
			}

			if (spec[jndex].c)
			{
				chars = chars + spec[jndex].f(arg);
			}
			else if (string != '%')
			{
				chars = chars + _putchar('%');
			}
			else if (!string)
			{
				return (-1);
			}
			else
			{
				chars = chars + _putchar(string);
			}
		}
		else
		{
			chars = chars + _putchar(string);
		}

		index++;
		string = format[index];
	}
	return (chars);
}
