#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer.
 * @args: Argument to print.
 * Return: Number of characters printed.
 */
int print_unsigned(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	int number, last_digit = value % 10, digit, multiplier = 1;
	int count = 1;

	value /= 10;
	number = value;

	if (last_digit < 0)
	{
		_putchar('-');
		number = -number;
		value = -value;
		last_digit = -last_digit;
		count++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			multiplier *= 10;
			number /= 10;
		}
		number = value;

		while (multiplier > 0)
		{
			digit = number / multiplier;
			_putchar(digit + '0');
			number -= digit * multiplier;
			multiplier /= 10;
			count++;
		}
	}
	_putchar(last_digit + '0');
	return (count);
}
