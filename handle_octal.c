#include "main.h"

/**
 * handle_octal - Handles the '%o' specifier to print an unsigned integer
 *  as an octal number.
 * @_printf: A va_list containing the argument to print.
 * @length: A pointer to an int tracking the length of char
 * This function takes a va_list that contain unsigned integer,
 * It convert the int to its octal representation and print it out.
 *
 * Return: zero.
 */
void handle_octal(unsigned int octalValue, int *length)
{
	unsigned int num = octalValue;
	char octal_buffer[32];
	int y = 0;

	do {
		oct_buffer[y++] = '0' + (num % 8);
		num /= 8;
	} while (num != 0);
	while (--y >= 0)
	{
		write(STDOUT_FILENO, &octal_buffer[y], 1);
		(*length)++;
	}
}
