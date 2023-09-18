#include "main.h"

/**
 * handle_char - Print a character from the variadic argument list
 *
 * This function retrieves a character argument from the variadic argument
 * list and writes it to the standard output file descriptor. It also
 * increments the length counter to keep track of the number of characters
 * printed.
 *
 * @arg_char:  A va_list containing the variadic arguments.
 * @length:    A pointer to an integer representing the length counter.
 */

void handle_char(va_list arg_char, int *length)
{
	char c = va_arg(arg_char, int);

	write(STDOUT_FILENO, &c, 1);
	(*length)++;
}
