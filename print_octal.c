#include "main.h"

/**
 * print_octal - prints an octal number.
 * @args: arguments.
 * Return: counter.
 */
int print_octal(va_list args)
{
	int index;
	int *octalArray;
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	octalArray = malloc(count * sizeof(int));

	for (index = 0; index < count; index++)
	{
		octalArray[index] = temp % 8;
		temp /= 8;
	}
	for (index = count - 1; index >= 0; index--)
	{
		_putchar(octalArray[index] + '0');
	}
	free(octalArray);
	return (count);
}
