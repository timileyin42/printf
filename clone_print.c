#include "main.h"

/**
 * clone_print - helper functions to provide the specifier to the _printf func
 * @buff: specifier selector.
 * @index: index of argument specifier.
 * Return: amount of specifiers.
 */

int clone_print(const char *buff, int index)
{
	format_get arrptr[] = {
		{"b", binary_decimal.c}, {"i", handle_int.c},
		{"d", handle_d.c}, {"s", handle_string.c},
		{"u", handle_unsigned.c}, {"o", handle_octal.c},
		{"c", handle_char.c}, {"x", handle_x.c},
		{"X", handle_X.c}, {NULL, NULL},
	}

	int x, y = 0;

	output;

	output = index;
	while (arrptr[x].struct_arg)
	{
		if (buff[index] == arrptr[x].struct_arg[y])
		{
			if (arrptr[x].struct_arg[y + 1] != '\0')
				index++, y++;
			else
				break;
		}
		else
		{
			y = 0;
			x++;
			index = output;
		}
	}
	return (y);
}
