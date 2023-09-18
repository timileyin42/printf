#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>


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

/**
 * struct format - struct for pointet functions
 * @struct_arg: specifier
 * @s: pointer to the specifier function
 */

typedef struct format
{
	char *struct_arg;
	int (*s)(va_list, char *, unsigned int);
} format_get;

int _printf(const char *format, ...);
int binary_decimal(va_list binary, char *store, unsigned int output);
unsigned int bu_s(char *fill, char s, unsigned int index);
int handle_char(va_list arg_char, char *store, unsigned int output);
void handle_octal(unsigned int octalValue, int *length);
int handle_string(va_list arg_string, char *store, unsigned int *output);
void handle_x(va_list args, int *length);
int handle_p(va_list pointer, char *store, unsigned int *output);
void handle_X(va_list args, int *length);
void handle_S(va_list args, int *length);
void handle_d(va_list decimal, int *length);
int (*get_format(const char *buff, int index))(va_list, char *, unsigned int);
int clone_print(const char *buff, int index);
unsigned int bu_s(char *fill, char s, unsigned int index);
int handle_per(va_list x __attribute__((unused)), char *box, unsigned int out);
int handle_i(va_list arg_int, char *box, unsigned int out);
void print_non_printable(char *buffer, char c, int *index);
#endif
