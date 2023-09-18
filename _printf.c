#include "main.h"
#include <unistd.h>

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
 * print_non_printable - Helper function to print non-printable char as \xXX.
 *
 * @buffer: buffer where the output is being constructed.
 * @c: The character to be printed.
 * @index: ointer to an integer that keeps track of the current position.
*/
void print_non_printable(char *buffer, char c, int *index)
{
	if (*index + 4 <= BUFFER_SIZE)
	{
		buffer[(*index)++] = '\\';
		buffer[(*index)++] = 'x';
		snprintf(buffer + *index, 3, "%02X", (unsigned char)c);
		*index += 2;
	}
	else
	{
		write(STDOUT_FILENO, buffer, *index);
		*index = 0;
		print_non_printable(buffer, c, index);
	}
}

/**
 * print_pointer - Helper function to print a pointer in hexadecimal format.
 *
 * @buffer: where the output is being constructed.
 * @ptr: pointer to void that represents the address you want to print.
 * @index: keeps track of the current position in the buffer.
*/
void print_pointer(char *buffer, void *ptr, int *index)
{
	if (*index + 16 <= BUFFER_SIZE)
	{
		uintptr_t address = (uintptr_t)ptr;
		snprintf(buffer + *index, 18, "0x%016lx", address);
		*index += 16;
	}
	else
	{
		write(STDOUT_FILENO, buffer, *index);
		*index = 0;
		print_pointer(buffer, ptr, index);
	}
}
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
