#include <unistd.h>
#include "main.h"

/**
 * print_buffer - Writes the buffer to standard output
 * @writeBuffer: The buffer to print
 * @buffer_index: The current index in the buffer
 * Return: number of index printed
 */

int print_buffer(char *writeBuffer, int buffer_index)
{
	return (write(STDOUT_FILENO, writeBuffer, buffer_index));
}

