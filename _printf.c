#include "main.h"
#include <unistd.h>

/**
 * _printf - simulates of the printf function
 * @format: The format string
 *
 * Return: The number of characters to be print.
 */

int _printf(const char *format, ...)
{
	int length = 0;
	va_list _printf;

	va_start(_printf, format);
	int x;

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			write(STDOUT_FILENO, &format[x], 1);
			length++;
		} else
		{
			x++;
			if (format[x] == 'c')
			{
				char c = va_arg(_printf, int);

				write(STDOUT_FILENO, &c, 1);
				length++;
			} else if (format[x] == 's')
			{
				char *s = va_arg(_printf, char *);
				int count = 0;

				while (s[count] != '\0')
				{
					count++;
				}
				write(STDOUT_FILENO, s, count);
				length = length + count;
			} else if (format[x] == '%')
			{
				write(STDOUT_FILENO, "%", 1);
				length++;
			}
		}
	}
	va_end(_printf);
	return (length);
}
