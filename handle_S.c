#include "main.h"

/**
 * handle_S - Handles the %S specifier to print a
 * string with non-printable characters escaped.
 *
 * @args: A va_list containing the string to be printed.
 * @length: A pointer to an integer tracking the length to be printed.
 */

void handle_S(va_list args, int *length)
{
	int x;
	char *s = va_arg(args, char *);

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < 32 || s[x] >= 127)
		{
			write(STDOUT_FILENO, "\\x", 2);
			(*length) += 2;

			char hex[3];
			_printf(hex, "%02X", (unsigned char)s[x]);
			write(STDOUT_FILENO, hex, 2);
			(*length) += 2;
		}
		else
		{
			write(STDOUT_FILENO, &s[x], 1);
			(*length)++;
		}
	}
}
