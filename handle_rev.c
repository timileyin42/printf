#include "main.h"

/**
 * handle_rev - Function that writes str in reverse order
 * @arg_str: The var holding the input string
 * @store: A pointer pointing to the buffer holding the string
 * @length: The var index printing string for the buffer pointer
 * Return: number of chars printed.
*/
int handle_rev(va_list arg_str, char *store, unsigned int length)
{
	char *str;
	unsigned int x;
	int y = 0;
	char nill[] = "(llun)";

	str = va_arg(arg_str, char *);
	if (str == NULL)
	{
		for (; nill[x]; x++)
			length = bu_s(store, nill[x], length);
		return (6);
	}
	for (; str[x]; x++)
		;
	y = x - 1;
	for (; y >= 0; y--)
	{
		length = bu_s(store, str[y], length);
	}

	return (x);
}
