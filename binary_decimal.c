#include "main.h"
#include <stdlib.h>

/**
 * binary_decimal - print of decimal number to binary.
 * @binary: va_list mood of unsigned int.
 * @store: A buffer to store the binary numbers to print.
 * @length: The  current position to start printing in the buffer
 * Return: numbers of character printed.
 */

int binary_decimal(va_list binary, char *store, unsigned int length)
{
	int output;
	int x, y_negative;
	int num, decimal;
	char *num_bits;

	output = va_arg(binary, int);
	y_negative = 0;
	if (output == 0)
	{
		length = bu_s(store, '0', length);
		return (1);
	}
	if (output < 0)
	{
		output = (output * -1) - 1;
		y_negative = 1;
	}
	num_bits = malloc(sizeof(char) * (32 + 1));
	num_bits = binary_call(num_bits, output, y_negative, 32);
	num = 0;
	for (decimal = x = 0; num_bits[x]; x++)
	{
		if (num == 0 && num_bits[x] == '1')
			num = 1;
		if (num == 1)
		{
			length = bu_s(store, num_bits[x], length);
			decimal++;
		}
	}
	free(num_bits);
	return (x);
}
