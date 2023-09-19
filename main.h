#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>

#define BUFFER_SIZE 1024

/**
 * struct format - struct for pointet functions
 * @struct_arg: specifier
 * @s: pointer to the specifier function
 */

typedef struct format
{
	char *struct_arg;
	int (*s)(va_list, char *, unsigned int);
} format_t;

int write_buf(char *writeBuffer, unsigned int buffer_index);
int _printf(const char *format, ...);
int binary_decimal(va_list binary, char *store, unsigned int output);
unsigned int bu_s(char *fill, char s, unsigned int index);
int handle_char(va_list arg_char, char *store, unsigned int output);
int handle_octal(va_list octal, char *store, unsigned int length);
int handle_string(va_list arg_string, char *store, unsigned int output);
int handle_p(va_list pointer, char *store, unsigned int length);
int handle_X(va_list args, char *buffer, unsigned int length);
int handle_S(va_list string, char *store, unsigned int length);
int handle_d(va_list arg_int, char *box, unsigned int out);
 int (*format_get(const char *buff, int index))(va_list, char *, unsigned int);
int clone_print(const char *buff, int index);
unsigned int bu_s(char *fill, char s, unsigned int index);
int handle_per(va_list x __attribute__((unused)), char *box, unsigned int out);
int handle_i(va_list arg_int, char *box, unsigned int out);
int print_non_printable(char *buffer, char c, int *index);
char *binary_call(char *binary, long int output, int neg, int length);
char *binary_hexa_array(char *fill, char *hexa, int count, int length);
char *octal_call(char *buffer, char *octal);
int handle_unsigned(va_list args, char *store, unsigned int length);
int handle_x(va_list args, char *buffer, unsigned int length);
int handle_lng_int(va_list arg_lint, char *store, unsigned int length);
int handle_rev(va_list arg_str, char *store, unsigned int length);
int handle_rot(va_list arg_rot, char *store, unsigned int length);
#endif
