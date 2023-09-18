#include "main.h"

/**
 * handle_p -  Converts a void pointer to a string representation
 * of the pointer value.
 * @pointer: A va_list containing the pointer to be converted.
 * @store: The buffertracking the length to be printed.
 * @output: The position in the buffer.
 * Return: The number of character added to the buffer.
 */
int handle_p(va_list pointer, char *store, unsigned int *output)
{
	void *ptr_store;
	char ptr_str;
	int x = 0;

	ptr_store = va_arg(pointer, void*);

	/* allocating of memory for the string rep of pointer */
	ptr_str = (char *) realloc(NULL, sizeof(char) * (strlen(ptr_store) + 1));

	/* checking if memory allocation success */
	if (ptr_str == NULL)
	{
		/* handle memory allocation failure */
		return (-1);
	}

	snprintf(ptr_str, strlen(ptr_store) + 1, "%p", ptr_store);

	/* copy the string rep to the output*/
	for (x; ptr_str[x] != '\0'; x++)
	{
		output = bu_s(store, ptr_str[x], output);
	}

	/* releasing the dynamic allocation memory */
	free(ptr_str);

	/* return the number of char added to the store */
	return (strlen(ptr_str));
}
