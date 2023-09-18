#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#define PRINT_BUFFER_SIZE 1024
#define BUFFER_FLUSH -1

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
/**
 * struct param - Structure to hold various formatting parameters
 *
 * @unsign: Whether it's an unsigned number
 *
 * @plus_flag: Whether the plus flag is set
 * @space_flag: Whether the space flag is set
 * @hashtag_flag: Whether the hashtag flag is set
 * @zero_flag: Whether the zero flag is set
 * @minus_flag: Whether the minus flag is set
 *
 * @width: The specified width
 * @percision: The specified precision
 *
 * @h_modifier: Whether the 'h' modifier is used
 * @l_modifier: Whether the 'l' modifier is used
 */
typedef struct param
{
	unsigned int unsign : 1;
	unsigned int plus_flag : 1;
	unsigned int space_flag : 1;
	unsigned int hashtag_flag : 1;
	unsigned int zero_flag : 1;
	unsigned int minus_flag : 1;

	unsigned int width;
	unsigned int percision;

	unsigned int h_modifier : 1;
	unsigned int l_modifier : 1;
} params_t;

int _printf(const char *format, ...);
void print_buffer(char *writeBuffer, int *buffer_index);
int binary_decimal(va_list binary);

#endif
