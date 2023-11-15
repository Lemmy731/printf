#include "main.h"

/**
 * print_hex_upper_extension - prints an hexadecimal number.
 * @value: number to print.
 * Return: counter.
 */
int print_hex_upper_extension(unsigned int value)
{
	int iterator;
	int *hexArray;
	int counter = 0;
	unsigned int tempValue = value;

	while (value / 16 != 0)
	{
		value /= 16;
		counter++;
	}
	counter++;
	hexArray = malloc(counter * sizeof(int));

	for (iterator = 0; iterator < counter; iterator++)
	{
		hexArray[iterator] = tempValue % 16;
		tempValue /= 16;
	}
	for (iterator = counter - 1; iterator >= 0; iterator--)
	{
		if (hexArray[iterator] > 9)
			hexArray[iterator] = hexArray[iterator] + 7;
		_putchar(hexArray[iterator] + '0');
	}
	free(hexArray);
	return (counter);
}
