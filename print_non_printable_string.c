#include "main.h"

/**
 * print_non_printable_string - Print non printable string.
 * @args: Parameter.
 * Return: Integer.
 */
int print_non_printable_string(va_list args)
{
	char *input_str;
	int index = 0;
	int length = 0;
	char current_char;

	input_str = va_arg(args, char *);

	current_char = input_str[index];

	if (input_str == NULL)
		input_str = "(null)";

	for (index = 0; input_str[index] != '\0'; index++)
	{
		if (current_char < 32 || current_char >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length += 2;

			if (current_char < 16)
			{
				_putchar('0');
				length++;
			}
			length += print_hex_upper_extension(current_char);
		}
		else
		{
			_putchar(current_char);
			length++;
		}
	}
	return (length);
}
