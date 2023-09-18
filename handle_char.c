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
 * @store: A pointer to the character.
 * @output: the charcter to be print out
 * Return: alwys 1.
 */

int handle_char(va_list arg_char, char *store, unsigned int output)
{
	/* the character that will be printed */
	char  = char_to_print;

	/* get the next argument in the variable list as int and cast */
	char_to_print = (char) va_arg(arg_char, int);

	/* store the buffer and the output in the bu_store */
	bu_s(store, char_to_print, output);

	/* return 1 to indicate success */
	return (1);
}
