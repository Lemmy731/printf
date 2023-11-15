#include "main.h"
/**
 * print_hex_lower_extension - Print
 * hexadecimal representation of a number.
 * @number: The number to convert.
 * Return: The number of characters printed.
 */
int print_hex_lower_extension(unsigned long int number)
{
	long int index;
	long int *hexArray;
	long int count = 0;
	unsigned long int temp = number;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;

	hexArray = malloc(count * sizeof(long int));

	for (index = 0; index < count; index++)
	{
		hexArray[index] = temp % 16;
		temp = temp / 16;
	}
	for (index = count - 1; index >= 0; index--)
	{
		if (hexArray[index] > 9)
			hexArray[index] = hexArray[index] + 39;
		_putchar(hexArray[index] + '0');
	}
	free(hexArray);
	return (count);
}
