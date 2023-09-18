#include "main.h"

/**
 * handle_x - Handles the %x specifier to print an unsigned
 * int as hexadecimal.
 * @args: A va_list containing the unsigned int to print.
 * @length: Apointer to ain integer tracking length to be printed
 */

void handle_x(va_list args, int *length)
{
	int x = 0;
	unsigned int num = va_arg(args, unsigned int);
	char hex[16];

	do {
		hex[x++] = "0123456789abcdef"[num % 16];
		num /= 16;
	} while (num != 0);
	while (--x >= 0)
	{
		write(STDOUT_FILENO, &hex[x], 1);
		(*length)++;
	}
}

