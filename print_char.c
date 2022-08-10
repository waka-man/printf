#include "main.h"

/**
 * print_char - character printer function
 * @arg: string argument
 * Return: number of chars processed
 */

int print_char(va_list arg)
{
	int ret;

	res = _putchar(va_arg(arg, int));

	return (ret);
}
