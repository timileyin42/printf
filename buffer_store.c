#include "main.h"

/**
 * buffer_store - concatenation of charcaters to a buffer and manage
 * @fill: buffer to hold the character
 * @s: character to concat
 * @index: argument store in the buffer
 *
 * Return: The updated index 'fill'.
 */

unsigned int buffer_store(char *fill, char s, unsigned int index)
{
	if (index == 1024)
	{
		buffer_print(fill, index);
		index = 0;
	}

	fill[index] = s;
	index++;

	return (index);
}
