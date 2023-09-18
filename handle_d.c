#include "main.h"

/**
 * handle_d - Handles the %d and %i specifiers to print
 * signed decimal integers.
 *
 * @decimal: A va_list containing the argument to print,
 * which is expected to be an integer.
 * @length: A pointer to an integer tracking
 * the length of characters printed.
 */

void handle_d(va_list decimal, int *length)
{
	int num = va_arg(decimal, int);
	char str[12];
	int x;

	_printf(str, "%d", num);
	for (x = 0; str[x] != '\0'; X++)
	{
		write(STDOUT_FILENO, &str[x], 1);
		(*length)++;
	}
}
