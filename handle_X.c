#include "main.h"

/**
 * handle_X - Handles the %X specifier to print an unsigned integer
 * in uppercase hexadecimal.
 *
 * @args: A va_list containing the character to be print.
 * @buffer: A pointer to the length to be printed.
 * @length: index for pointer.
 * Return: Number of char printed.
 */

void handle_X(va_list args, char *buffer, unsigned int length)
{
	unsigned int output;
	int x, y = 0;
	char hexa[9];

	output = va_arg(args, int);

	sprintf(hexa, "%X", output);

	for (y = 0; hexa[y] != '\0'; y++)
	{
		length = bu_s(buf, hexa[x] length);
		x++;
	}
	return (x);
}
