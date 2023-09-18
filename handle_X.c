#include "main.h"

/**
 * handle_X - Handles the %X specifier to print an unsigned integer
 * in uppercase hexadecimal.
 *
 * @args: A va_list containing the unsigned integer to be printed.
 * @length: A pointer to an integer tracking the length to be printed.
 */

void handle_X(va_list args, int *length)
{
	int x = 0;
	unsigned int num = va_arg(args, unsigned int);
	char hex[16];

	do {
		hex[x++] = "0123456789ABCDEF"[num % 16];
		num /= 16;
	} while (num != 0);
	while (--x >= 0)
	{
		write(STDOUT_FILENO, &hex[x], 1);
		(*length)++;
	}
}
