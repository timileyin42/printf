#include "main.h"
/**
 * handle_unsigned - printing of an unsigned int
 * @args: The var holding the number to print
 * @store: A pointer to the va holding the character to print
 * @length: The var comprises of the unsigned nu
 * Return: number of chars printed.
 */
int handle_unsigned(va_list args, char *store, unsigned int length)
{
	unsigned int x, output, count, divisor;

	output = va_arg(args, unsigned int);
	count = output;
	divisor = 1;
	while (count > 9)
	{
		divisor = divisor * 10;
		count /= 10;
	}
	for (x = 0; divisor > 0; divisor /= 10, x++)
	{
		length = bu_s(store, ((output / divisor) % 10) + '0', length);
	}
	return (x);
}
