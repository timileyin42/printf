#include "main.h"
/**
 * binary_hexa_array - Print out a hexa number to the stdout
 * @fill: A var where the binary number is store.
 * @hexa: An array pointer where hexadecimal is store.
 * @count: A var integer that checks and determines
 * if the hexadecimal array is in uppercase or lowercase letter.
 * @length: An argument block checking the size of hex to num
 * Return: The binary number of an array.
 */
char *binary_hexa_array(char *fill, char *hexa, int count, int length)
{
	int num, to_hexa;
	int x, y;

	hexa[length] = '\0';
	if (count)
		to_hexa = 55;
	else
		to_hexa = 87;
	for (x = (length * 4) - 1; x >= 0; x--)
	{
		for (num = 0, y = 1; y <= 8; y = y * 2, x--)
			num = ((fill[x] - '0') * y) + num;
		x++;
		if (num < 10)
			hexa[x / 4] = num + 48;
		else
			hexa[x / 4] = num + to_hexa;
	}
	return (hexa);
}
