#include "main.h"
/**
 * print_character - Print a single character.
 * @c: The character to be printed.
 */
void print_character(char c)
{
	_putchar(c);
}
/**
 * print_string - Print a null-terminated string.
 * @str: The string to be printed.
 */
void print_string(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
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
	unsigned int count;

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
					print_character(va_arg(args, int));
					break;
				case 's':
					print_string(va_arg(args, const char *));
					break;
				case '%':
					_putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(*format);
					count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
