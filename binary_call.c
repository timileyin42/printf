#include "main.h"

/**
 * binary_call - it prints and suplies decimals in binary
 * @binary: A pointer pointing to the var holding the decimal & binary
 * @dec: the var containing the inputed number.
 * @neg: checking if the number is pos or neg.
 * @length: checking for the size of the binary
 * Return: number requested for from other functions.
 */
char *binary_call(char *binary, long int output, int neg, int length)
{
	int x;

	/* initializing the binary array with space instead zero */
	for (x = 0; x < length; x++)
		binary[x] = ' ';
	binary[length] = '\0';

	/* fill the binary array with the binary rep of num */
	for (x = length - 1; output > 1; x--)
	{
		if (output == 2)
			binary[x] = '0';
		else
			binary[x] = (output % 2) + '0';
		output = output / 2;
	}
	if (output != 0)
		binary[x] = '1';

	/* checking if the input num is negative */
	if (neg)
	{
		for (x = 0; binary[x]; x++)
			if (binary[x] == '0')
				binary[x] = '1';
			else
				binary[x] = '0';
	}
	return (binary);
}
