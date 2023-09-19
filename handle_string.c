#include "main.h"

/**
 * handle_string - Handles the %s specifier to print a string
 *
 * @arg_string: a va_list containing the argumnet to print.
 * @store: A pointer to char tracking the string to be printed.
 * @output: the character containing the string buffer is pointing to
 * Return: always 1
 */

int handle_string(va_list arg_string, char *store, unsigned int output)
{
	/* pointer to the string that will be printed */
	char *string_to_print;

	/* x variable to loop through the string */
	unsigned int x;

	char null_string[] = "(null)";

	/* getting the next arg in the variable list as a string */
	string_to_print = va_arg(arg_string, char *);

	/* checking if it's null */
	if (string_to_print == NULL)
	{
		/* loop through the null_string and handle the store for eacg */
		for (x = 0; null_string[x]; x++)
		{
			output = bu_s(store, null_string[x], output);
		}
		/* return length of null_string */
		return (6);
	}

	/* loop through the string_to_print and handle store */
	for (x = 0; string_to_print[x]; x++)
	{
		output = bu_s(store, string_to_print[x], output);
	}
	/* return the length of string_to_print */
	return (x);
}
