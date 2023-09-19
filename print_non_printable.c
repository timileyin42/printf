#include "main.h"
/**
 * print_non_printable - Helper function to print non-printable char as \xXX.
 *
 * @buffer: buffer where the output is being constructed.
 * @c: The character to be printed.
 * @index: pointer to an integer that keeps track of the current position.
 *
 * Return: Always 0 (success)
*/
int print_non_printable(char *fill, char s, unsigned int index)
{
	if (index + 4 <= BUFFER_SIZE)
	{
		fill[index++] = '\\';
		fill[index++] = 'x';
		*index = bu_s(fill, s, *index);
	}
	else
	{
		write_buf(s, fill, *index);
		*index = 0;
		print_non_printable(fill, s, index);
	}
	return (0);
}
