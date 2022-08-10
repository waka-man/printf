#include "main.h"

/**
 * print_dec - base 10 decimal/ integer printer function
 * @arg: argument after decimal specifier is found
 * Return: count of printed decimal
 */

int print_dec(va_list arg)
{
	int count = 0;
	int div = 1;
	long int integer = va_arg(arg, int);
	int num;

	if (integer < 0)
	{
		_putchar('-');
		num = integer * -1;
		count++;
	}
	else
	{
		num = integer;
	}

	while ((num / div) > 9)
	{
		div = div * 10;
	}

	while (div != 0)
	{
		_putchar((num / div) + '0');
		num = num % div;
		div = div / 10;

		count++;
	}
	return (count);
}
