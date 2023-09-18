#include "main.h"

/**
 * get_format - Get the rigth function to print on the terminal
 * @buff: The format specifer checker
 * @index: index for argument specifer
 *
 * Return: Pointer to the right function
 */

int (*get_format(const char *buff, int index))(va_list, char *, unsigned int)
{
	format_get arrptr[] = {
		{"d", handle_d.c}
		{"b", binary_decimal.c}
		{"c", handle_char.c}
		{"s", handle_string.c}
		{"i", handle_int.c}
		{"u", handle_unsigned.c}
		{"o", handle_octal.c}
		{"x", handle_x.c}
		{"X", handle_X.c}
	};

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
	return (arrptr[x].s);
}
