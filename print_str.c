#include "main.h"

/**
 * print_str - string printer function
 * @arg: string argument
 * Return: number of chars processed
 */

int print_str(va_list arg)
{
	int chars;
	char *string = va_arg(arg, char *);

	while (string[chars])
	{
		chars = chars + _putchar(string[chars]);
	}

	return (chars);
}
