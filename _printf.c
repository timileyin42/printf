#include "main.h"

#define BUFFER_SIZE 1024
#define STDOUT_FILENO1

/**
 * print_char - printing of a character to standard output
 * @_printf: The va_list of object containing the character argument
 */

void print_char(va_list _printf)
{
	char c = va_arg(_printf, int);

	write(STDOUT_FILENO, &c, 1);
}
/**
 * print_string - printing of a string to standard output.
 * @_printf: The va_list of object containing the string argument.
 */
void print_string(va_list _printf)
{
	char *str = va_arg(_printf, char *);

	write(STDOUT_FILENO, str, strlen(str));
}
/**
 * _printf - simulates of the printf function
 * @format: The format string
 *
 * Return: The number of characters to be print.
 */
int _printf(const char *format, ...)
{
	va_list _printf;
	const char *ptr;
	int length = 0;

	va_start(_printf, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
		{
			write(STDOUT_FILENO, ptr, 1);
			length++;
		}
		else
		{
			ptr++;
			switch (*ptr)
			{
				case 'c':
					print_char(_printf);
					length++;
					break;
				case 's':
					print_string(_printf);
					length++;
					break;
				case 'd':
				case 'i':
					print_decimal(_printf);
					length++;
					break;
				default:
					write(STDOUT_FILENO, "%", 1);
					write(STDOUT_FILENO, ptr, 1);
					length = length + 2;
					break;
			}
		}
	}
	va_end(_printf);
	return (length);
}
