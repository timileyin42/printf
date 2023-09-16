#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void print_buffer(char *writeBuffer, int *buffer_index);

#endif
