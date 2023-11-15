#include "main.h"
/**
 * _printf - a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert f[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", print_percent},
		{"%i", print_integer}, {"%d", print_decimal},
		{"%b", print_binary},
		{"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hex_lower},
		{"%X", print_hex_upper},
		{"%S", print_non_printable_string},
		{"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 11;
		while (j >= 0)
		{
			if (f[j].specifier[0] == format[i] && f[j].specifier[1] == format[i + 1])
			{
				length += f[j].handler(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
