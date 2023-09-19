#include "main.h"

/**
 * handle_x - Handles the %X specifier to print an unsigned integer
 * in uppercase hexadecimal.
 *
 * @args: A va_list containing the character to be print.
 * @buffer: A pointer to the length to be printed.
 * @length: index for pointer.
 * Return: Number of char printed.
 */

int handle_x(va_list args, char *buffer, unsigned int length)
{
	int output;
	int x, y_negative, num, decimal;
	char *hexa;
	char *bin;

	output = va_arg(args, int);
	y_negative = 0;

	if (output == 0)
	{
		length = bu_s(buffer, '0', length);
		return (1);
	}
	if (output < 0)
	{
		output = (output * -1) - 1;
		y_negative = 1;
	}
	bin = malloc(sizeof(char) * (32 + 1));
	bin = binary_call(bin, output, y_negative, 32);
	hexa = malloc(sizeof(char) * (8 + 1));
	hexa = binary_hexa_array(bin, hexa, 1, 8);

	for (decimal = x = num = 0; hexa[x]; x++)
	{
		if (hexa[x] != '0' && decimal == 0)
			decimal = 1;
		if (decimal)
		{
			length = bu_s(buffer, hexa[x], length);
			num++;
		}
	}
	free(bin);
	free(hexa);
	return (num);
}
