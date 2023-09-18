#include "main.h"
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
		bu_s(buffer + *index, 3, "%02X", (unsigned char)c);
		*index += 2;
	}
	else
	{
		write_buf(STDOUT_FILENO, buffer, *index);
		*index = 0;
		print_non_printable(buffer, c, index);
	}
}
