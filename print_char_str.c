#include "main.h"
/**
 * printf_char - Print a character.
 * @args: The va_list argument.
 *
 * Return: 1 on success.
 */
int printf_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	_putchar(c);
	return (1);
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
	char *str;

	str = va_arg(args, char *);

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
 * _printf - Print formatted output.
 * @format: Format string with %c, %s, and %% specifiers.
 * @...: Variable arguments corresponding to the format.
*
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);

	count = 0;

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;

			switch (*format)
			{
				case 'c':
					count += printf_char(args);
					break;
				case 's':
					count += printf_string(args);
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
