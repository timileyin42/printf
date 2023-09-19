#include "main.h"

/**
 * handle_octal - prints decimal number in octal
 * @octal: input number
 * @store: A pointer pointing to the buffer where char are located
 * @length: The var holding the index the buffer pointer is pointing to
 * Return: number of chars printed.
 */
int handle_octal(va_list arg_octal, char *store, unsigned int length)
{
	int output, x, y_negative, num, decimal;
	char *octal_str, *bin;

	output = va_arg(arg_octal, int);
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
	bin = malloc(sizeof(char) * (32 + 1));
	bin = binary_call(bin, output, y_negative, 32);
	octal_str = malloc(sizeof(char) * (11 + 1));
	octal_str = octal_call(bin, octal_str);
	for (decimal = x = num = 0; octal_str[x]; x++)
	{
		if (octal_str[x] != '0' && decimal == 0)
			decimal = 1;
		if (decimal)
		{
			length = bu_s(store, octal_str[x], length);
			num++;
		}
	}
	free(bin);
	free(octal_str);
	return (num);
}
