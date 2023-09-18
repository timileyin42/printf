#include "main.h"

/**
 * handle_p - Handles the %p specifier to print a pointer address in
 * hexadecimal.
 *
 * @pointer: A va_list containing the pointer to be printed.
 * @length: A pointer to an integer tracking the length to be printed.
 */

void handle_p(va_list pointer, int *length)
{
	int x = 0;
	void *ptr = va_arg(pointer, void *);
	unsigned long num = (unsigned long)ptr;

	write(STDOUT_FILENO, "0x", 2);
	*length += 2;
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
