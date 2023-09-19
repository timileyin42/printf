#include "main.h"

/**
 * clone_print - helper functions to provide the specifier to the _printf func
 * @buff: specifier selector.
 * @index: index of argument specifier.
 * Return: amount of specifiers.
 */

int clone_print(const char *buff, int index)
{
	format_t arrptr[] = {
		{"b", binary_decimal}, {"i", handle_i},
		{"d", handle_d}, {"s", handle_string},
		{"u", handle_unsigned}, {"o", handle_octal},
		{"c", handle_char}, {"x", handle_x},
		{"X", handle_X}, {"I", handle_per},
		{"h", handle_per}, {" o", handle_octal},
		{NULL, NULL},
	};

	int x = 0;
	int y = 0;

	int output;

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
