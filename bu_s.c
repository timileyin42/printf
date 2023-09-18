#include "main.h"

/**
 * bu_s - concatenation of charcaters to a buffer and manage
 * @fill: buffer to hold the character
 * @s: character to concat
 * @index: argument store in the buffer
 *
 * Return: The updated index 'fill'.
 */

unsigned int bu_s(char *fill, char s, unsigned int index)
{
	if (index == 1024)
	{
		write_buf(fill, index);
		index = 0;
	}

	fill[index] = s;
	index++;

	return (index);
}
