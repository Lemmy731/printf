#include "main.h"
/**
 * printf_char - Print a character.
 * @args: The va_list argument.
 *
 * Return: The number of characters printed.
 */
int printf_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	return (_putchar(c));
}
/**
 * printf_string - Print a string.
 * @args: The va_list argument.
 *
 * Return: The number of characters printed.
 */
int printf_string(va_list args)
{
	int count;

	const char *str = va_arg(args, const char *);

	count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
/**
 * print_percent - Print the percent sign (%).
 * Return: The number of characters printed (always 1).
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
}
