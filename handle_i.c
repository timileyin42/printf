#include "main.h"

/**
 * handle_i - Handles the %i specifier to print signed integers.
 *
 * @arg_int: A va_list containing the argument to print,
 * which is expected to be an integer.
 * @box: A pointer to an integer tracking the
 * of the int to be printed.
 * @out: var holding the int to be printed out
 * Return: Number of int to be printed
 */

int handle_i(va_list arg_int, char *box, unsigned int out)
{
	/* store inteer and holding variables for calculation */
	int store_int, holding_int;
	unsigned int j, divisor;

	unsigned int x, y_negative = 0;

	/* get the next argin the var arg_list as int */
	store_int = va_arg(arg_int, int);
	/* initializing isy_negative to 0 */
	y_negative = 0;

	/* if the store_int is negative, convert it to pos and set y to 1 */
	if (store_int < 0)
	{
		j = store_int * -1;
		out = bu_s(box, '-', out);
		y_negative = 1;
	}
	else
	{	j = store_int;
	}

	/* determine the higehest power of 10 less eqaul to */
	holding_int = j;
	divisor = 1;
	while (holding_int > 9)
	{	divisor = divisor * 10;
		holding_int = holding_int / 10;
	}

	/* converting each digit of j to char and store it */
	for (; divisor > 0; divisor = divisor / 10, x++)
	{
		out = bu_s(box, ((j / divisor) % 10) + '0', out);
	}
	/* return the number of digits in store_int plus 1, if negative */
	return (x + y_negative);
}
