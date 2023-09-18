#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct format - struct for pointet functions
 * @type_arg: specifier
 * @s: pointer to the specifier function
 */

typedef struct format
{
	char *type_arg;
	int (*s)(va_list, char *, unsigned int);
} format_get;

int _printf(const char *format, ...);
int binary_decimal(va_list binary);
int buffer_print(char *writBuffer, char c, int buffer_index);
int print_buffer(char *writeBuffer, int buffer_index);
void handle_char(va_list arg_char, int *length);
void handle_octal(unsigned int octalValue, int *length);
void handle_string(va_list string, int *length);
void handle_x(va_list args, int *length);
void handle_p(va_list pointer, int *length);
void handle_X(va_list args, int *length);
void handle_S(va_list args, int *length);
void handle_d(va_list decimal, int *length);
void handle_i(va_list integers, int *length);

#endif
