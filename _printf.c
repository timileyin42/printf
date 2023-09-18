#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: a character string composed of zero or more directives
 *
 * Description: This function writes output to stdout.
 * It returns the number of characters printed.
 *
 * Return: the number of characters printed.
 */

void _printf(const char *format, ...)
{
	unsigned int x, length = 0;
	unsigned index = 0;
	va_list _printf;
	int (*function)(va_list, char *, unsigned int);
	char *output;

	va_start(_printf, format), output = malloc(sizeof(char) * 1024);
	if (!format || !output || (format[x]) == '%' && !format[x + 1]))
		return (-1);
	if (!format[x])
		return (0);
	for (x; format && format [x]; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == '\0')
			{
				buffer_print(output, index), free(output), va_end(_printf);
				return (-1);
			}
			else
			{
				function = get_format(format, x + 1);
				if (function == NULL)
				{
					if (format[x + 1] == ' ' && !format[x + 2])
						return (-1);
					buffer_store(output, format[x], index), length++, x--;
				}
				else
				{
					length = length + function(_printf, output, index);
					x = x + clone_print(format, x + 1);
				}
			} x++;
		}
		else
			buffer_store(output, format[x], index), length++;
		for (index = length; index > 1024; index = index - 1024)
	}
	buffer_print(output, index), free(output), va_end(_printf);
	return (length);
}

