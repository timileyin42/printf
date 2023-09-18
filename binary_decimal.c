#include "main.h"
#include <stdlib.h>

/**
 * binary_decimal - print of decimal number to binary.
 * @binary: va_list mood of unsigned int.
 * @store: A buffer to store the binary numbers to print.
 * @output: The  current position to start printing in the buffer
 * Return: numbers of character printed.
 */

int binary_decimal(va_list binary, char *store, unsigned int output)
{
	unsigned int bin;
	int x, y;
	int num;

	bin = va_arg(binary, unsigned int);
	if (unsigned_int_bin == 0)
	{
		output = bu_s(store, '0', output);
		return (1);
	}

	char num_bits[33];

	for (y = 0; y < 32; y++)
	{
		num_bits[y] = ((unsigned_int_bin >> (31 - y)) & 1) + '0';
	}
	num_bits[32] = '\0';

	num = 0;
	for (x = y = 0; num_bits[y]; y++)
	{
		if (num == 0 && num_bits[y] == '1')
			num = 1;
		if (num == 1)
		{
			output = bu_s(store, num_bits[y], output);
			x++;
		}
	}
	return (x);
}
