#include "main.h"
/**
 * octal_call - Function that hep suplies octal characterand print to stdout
 *
 * @buffer: A pointer array where it stored the binary.
 * @octal: A pointer to an array where is stored the octal.
 *
 * Return: binary array.
 */
char *octal_call(char *buffer, char *octal)
{
	int num, x, y, octaval, length;

	octal[11] = '\0';
	for (x = 31, octaval = 10; x >= 0; x--, octaval--)
	{
		if (x > 1)
			length = 4;
		else
			length = 2;
		for (num = 0, y = 1; y <= length; y = y * 2, x--)
			num = ((buffer[x] - '0') * y) + num;
		x++;
		octal[octaval] = num + '0';
	}
	return (octal);
}
