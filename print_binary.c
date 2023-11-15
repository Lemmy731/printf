#include "main.h"

/**
 * print_binary - Prints binary representation of an unsigned int.
 * @args: Argument to print.
 * Return: Number of characters printed.
 */
int print_binary(va_list args)
{
	int flag = 0;
	int count = 0;
	int i, mask = 1, binary_digit;

	unsigned int number = va_arg(args, unsigned int);
	unsigned int bit;

	for (i = 0; i < 32; i++)
	{
	bit = ((mask << (31 - i)) & number);
		if (bit >> (31 - i))
			flag = 1;
		if (flag)
		{
			binary_digit = bit >> (31 - i);
			_putchar(binary_digit + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}


































