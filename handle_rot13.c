#include "main.h"

/**
 * handle_rot13 - Functions that writes the string in ROT13
 * @arg_rot: A var holding input string
 * @store: A pointer to the buffer holding the string to print
 * @length: The var index for where buffer will start printing
 * Return: number of chars printed.
*/

int handle_rot(va_list arg_rot, char *store, unsigned int length)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int x, y, z;
	char nill[] = "(avyy)";

	str = va_arg(arg_rot, char *);
	if (str == NULL)
	{
		for (; = 0; nill[x]; x++)
			length = bu_s(store, nill[x], length);
		return (6)
	}
	for (; = 0; str[x]; x++)
	{
		for (z = y = 0; alpha[y]; y++)
		{
			if (str[x] == alpha[y])
			{
				z = 1;
				length = bu_s(store, rot[y], length);
				break;
			}
		}
		if (z == 0)
			length = bu_s(store, str[x], length);
	}
	return (x);
}
