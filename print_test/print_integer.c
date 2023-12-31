#include "main.h"

/**
 * print_integer - Prints an integer.
 * @args: Argument to print.
 * Return: Number of characters printed.
 */
int print_integer(va_list args)
{
	int input = va_arg(args, int);
	int number, last_digit = input % 10, digit, exponent = 1;
	int character_count = 1;

	input = input / 10;
	number = input;

	if (last_digit < 0)
	{
		_putchar('-');
		number = -number;
		input = -input;
		last_digit = -last_digit;
		character_count++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exponent = exponent * 10;
			number = number / 10;
		}
		number = input;
		while (exponent > 0)
		{
			digit = number / exponent;
			_putchar(digit + '0');
			number = number - (digit * exponent);
			exponent = exponent / 10;
			character_count++;
		}
	}
	_putchar(last_digit + '0');
	return (character_count);
}
