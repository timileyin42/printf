#include "main.h"

/**
 * handle_i - Handles the %i specifier to print signed integers.
 *
 * @integers: A va_list containing the argument to print,
 * which is expected to be an integer.
 * @length: A pointer to an integer tracking the
 * length of characters printed.
 */

void handle_i(va_list integers, int *length)
{
	handle_d(decimal, length);
}
