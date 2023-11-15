#include "main.h"

/**
 * print_hex_lower - Prints an unsigned integer
 * in lowercase hexadecimal format.
 * @args: Argument to print.
 *
 * Return: digit_count..
 */
int print_hex_lower(va_list args)
{
	int i;
	int *digits;
	int digit_count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		digit_count++;
	}
	digit_count++;
	digits = malloc(digit_count * sizeof(int));

	for (i = 0; i < digit_count; i++)
	{
		digits[i] = temp % 16;
		temp /= 16;
	}
	for (i = digit_count - 1; i >= 0; i--)
	{
		if (digits[i] > 9)
			digits[i] = digits[i] + 39;
		_putchar(digits[i] + '0');
	}
	free(digits);
	return (digit_count);
}
