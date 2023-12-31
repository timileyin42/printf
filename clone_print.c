#include "main.h"

/**
 * clone_print - helper functions to provide the specifier to the _printf func
 * @s: specifier selector.
 * @index: index of argument specifier.
 * Return: amount of specifiers.
 */

int clone_print(const char *s, int index)
{
	format_t arrptr[] = {
		{"b", binary_decimal}, {"i", handle_i},
		{"d", handle_d}, {"s", handle_string},
		{"u", handle_unsigned}, {"o", handle_octal},
		{"c", handle_char}, {"x", handle_x},
		{"X", handle_X}, {"R", handle_rot},
		{"r", handle_rev}, {"+x", handle_x},
		{" x", handle_x}, {"ld", handle_lng_int},
		{"li", handle_lng_int}, {"l", handle_per},
		{NULL, NULL},
	};

	int x = 0;
	int y = 0;

	int output;

	output = index;
	while (arrptr[x].struct_arg)
	{
		if (s[index] == arrptr[x].struct_arg[y])
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
