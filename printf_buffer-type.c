#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024
#define STDOUT_FILENO 1

/**
 * print_buffer - Writes the buffer to standard output
 * @writeBuffer: The buffer to print
 * @buffer_index: The current index in the buffer
 */
void print_buffer(char *writeBuffer, int *buffer_index)
{
    if (*buffer_index > 0)
    {
        write(STDOUT_FILENO, writeBuffer, *buffer_index);
        *buffer_index = 0;
    }
}

