#include "main.h"

/**
 * format_get - Get the rigth function to print on the terminal
 * @s: The format specifer checker
 * @index: index for argument specifer
 *
 * Return: Pointer to the right function
 */

int (*format_get(const char *s, int index))(va_list, char *, unsigned int)
{
	format_t arrptr[] = {
		{"d", handle_d},
		{"b", binary_decimal},
		{"c", handle_char},
		{"s", handle_string},
		{"i", handle_i},
		{"u", handle_unsigned},
		{"o", handle_octal},
		{"x", handle_x},
		{"X", handle_X},
		{"R", handle_rot},
		{"r", handle_rev},
		{"+x", handle_x},
		{" x", handle_x},
		{"ld", handle_lng_int},
		{"li", handle_lng_int},
		{"l", handle_per},
	};

	int x = 0, y = 0;

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
	return (arrptr[x].s);
}
