#include "main.h"

/**
 * handle_string - Handles the %s specifier to print a string
 *
 * @string: a va_list containing the argumnet to print.
 * @length: A pointer to char tracking the length to be printed.
 */

void handle_string(va_list string, int *length)
{
	int x;
	char *s = va_arg(string, char *);

	for (x = 0; s[x] != '\0'; x++)
	{
		write(STDOUT_FILENO, &s[x], 1);
		(*length)++;
	}
}
