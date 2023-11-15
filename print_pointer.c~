#include "main.h"

/**
 * print_pointer - Print a pointer address.
 * @args: The va_list argument.
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
	void *ptr;
	char *nil_str = "(nil)";
	long int address;
	int length = 0;
	int i;

	ptr = va_arg(args, void *);

	if (ptr == NULL)
	{
		for (i = 0; nil_str[i] != '\0'; i++)
		{
			_putchar(nil_str[i]);
		}
		return i;
	}
	address = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	length = print_hex_lower_extension(address);
	return length + 2;
}
