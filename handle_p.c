#include "main.h"

/**
 * handle_p -  Converts a void pointer to a string representation
 * of the pointer value.
 * @pointer: A va_list containing the pointer to be converted.
 * @store: The buffertracking the length to be printed.
 * @length: The position in the buffer.
 * Return: The number of character added to the buffer.
 */
int handle_p(va_list pointer, char *store, unsigned int length)
{
	void *ptr_store;
	long int output;
	int x, num, decimal, y_negative;
	char *ptr_str, *hexa;
	char nill[] = "(nil)";

	ptr_store = (va_arg(pointer, void *));
	if (ptr_store == NULL)
	{
		for (x = 0; nill[x]; x++)
			length = bu_s(store, nill[x], length);
		return (5);
	}
	output = (intptr_t)ptr_store;
	y_negative = 0;
	if (output < 0)
	{
		output = (output * -1) - 1;
		y_negative = 1;
	}
	ptr_str = malloc(sizeof(char) * (64 + 1));
	ptr_str = binary_call(ptr_str, output, y_negative, 64);
	hexa = malloc(sizeof(char) * (16 + 1));
	hexa = binary_hexa_array(ptr_str, hexa, 0, 16);
	length = bu_s(store, '0', length);
	length = bu_s(store, 'x', length);
	for (decimal = x = num = 0; hexa[x]; x++)
	{
		if (hexa[x] != '0' && decimal == 0)
			decimal = 1;
		if (decimal)
		{
			length = bu_s(store, hexa[x], length);
			num++;
		}
	}
	free(ptr_str);
	free(hexa);

	return (num + 2);
}
