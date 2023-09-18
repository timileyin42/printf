#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: a character string composed of zero or more directives
 *
 * Description: This function writes output to stdout,
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int x, num = 0, ind = 0;
	va_list _printf;
	int (*fun)(va_list, char *, unsigned int);
	char *s;

	va_start(_printf, format), s = malloc(sizeof(char) * 1024);
	if (!format || !s || (format[x] == '%' && !format[x + 1]))
		return (-1);
	if (!format[x])
		return (0);
	for (x; format && format[x]; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == '\0')
			{	write_buf(s, ind), free(s), va_end(_printf);
				return (-1);
			}
			else
			{	fun = get_format(format, x + 1);
				if (fun == NULL)
				{
					if (format[x + 1] == ' ' && !format[x + 2])
						return (-1);
					bu_s(s, format[x], ind), num++, x--;
				}
				else
				{	num = num + fun(_printf, s, ind);
					x = x + clone_print(format, x + 1);
				}
			} x++;
		}
		else
			bu_s(s, format[x], ind), num++;
		for (ind = num; ind > 1024; ind = ind - 1024)
			;
	}
	write_buf(s, ind), free(s), va_end(_printf);
	return (num);
}
