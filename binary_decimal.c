#include "main.h"
#include <stdlib.h>

/**
 * binary_decimal - print of decimalnumber to binary.
 * @binary: va_list mood of unsigned int.
 *
 * Return: numbers of character printed.
 */

int binary_decimal(va_list binary)
{
	unsigned int x;
	int a, b;
	int *array;

	x = va_arg(binary, unsigned int);
	a = 0;
	if (c == 0)
	{
		char zero = '0';
		write(STDOUT_FILENO, &zero, 1);
		return (1);
	}
	int num_bits = 0;
	unsigned int count = x;

	while (count > 0)
	{
		count /= 2;
		num_bits++;
	}
	array = malloc(num_bits * sizeof(int));
	if (array == NULL)
	{
		return (-1);
	}
	a = 0;
	while (x > 0)
	{
		array[a] = x % 2;
		x = x / 2;
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		char binary_char = array[b] + '0';

		write(STDOUT_FILENO, &binary_char, 1);
	}
	free(array);
	return (a);
}
