#include "main.h"
#include <stdio.h>

/**
 * handle_per - function that checks if specifier is valid or not
 * @x: the varaible containing the specifier.
 * @box: A pointer to the variable holding the '%'
 * @out: the specifier container
 * Return: always 1
 */

int handle_per(va_list x __attribute__((unused)), char *box, unsigned int out)
{
	/* The character to be printed */
	char char_to_print = '%';

	/* add the char_to_print to the buffer at the position output */
	bu_s(box, char_to_print, out);

	/* return 1 if successful */
	return (1);
}
