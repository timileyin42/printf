#include "main.h"

/**
 * buffer_print - concating of all char in the buffer
 * @writeBuffer: buffer pointer
 * @c: character to concatenate.
 * @buffer_index: index of the buffer
 * Return: index of buffer concated
 */

int buffer_print(char *writBuffer, char c, int buffer_index)
{
	if (buffer_index == 1024)
	{
		print_buffer(writeBuffer, buffer_index);
		buffer_index = 0;
	}
	writeBuffer[buffer_index] = c;
	buffer_index++;
	return (buffer_index);
}
