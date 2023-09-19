#include "main.h"

/**
 * handle_lng_int - Handles the %lu specifier to print signed integers.
 *
 * @arg_lint: A va_list containing the argument to print,
 * which is expected to be an integer.
 * @store: A pointer to an integer tracking the
 * of the int to be printed.
 * @length: var holding the int to be printed out
 * Return: Number of int to be printed
*/
int handle_lng_int(va_list arg_lint, char *store, unsigned int length)
{
	long int output, holding_int;
	unsigned long int j, divisor;
	unsigned int x, y_negative = 0;

	output = va_arg(arg_int, int);
	y_negative = 0;

	if (output < 0)
	{
		j = output * -1;
		length = bu_s(store, '-', length);
		y_negative = 1;
	}
	else
	{
		j = output;
	}
	holding_int = j;
	divisor = 1;
	while (holding_int > 9)
	{
		divisor = divisor * 10;
		holding_int = holding_int / 10;
	}
	for (; divisor > 0; divisor = divisor / 10, x++)
	{
		length = bu_s(store, ((j / divisor) % 10) + '0', length);
	}
	return (x + y_negative);
}
