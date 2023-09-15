# Printf Project

The printf project is a collaboration between Akanmu Ibrahim and Abdelrhman 
Fikri, actual students of ALX_AFRICA.

## Project Description

This project is a simple implementation of the `printf` function in C. It's designed to mimic the `printf` function from the standard library, providing formatted output conversion.

## Features

- Supports conversion specifiers: `d`, `i`, `s`, `c`, and `%`.
- Handles the field width for non-custom conversion specifiers.

## Getting Started

The function _printf() writes output to stdout, the standard output stream with the format and options presented below. It uses an internal buffer of 1024 bytes although it can print larger sets of data.

Upon successful execution, this function returns the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value of -1 is returned.

The prototype of this function is the next:

int _printf(const char format, ...);

Meaning that it has one mandatory format argument, and an extra number of arguments that can be none, or many.

Format of the format string

The format string is a character string starting and ending with double quotes. The format string is composed of zero or more directives; ordinary characters (not %), and conversion specifications, each of which results in fetching zero or more subsequent arguments.

### Prerequisite

You will need to clone the repository of the project from Github. This will contain the _printf function and all of its dependencies. No main.c file will be provided for testing, so you will need to create one.

git clone https://github.com/Timileyin42/printf.git

After cloning the repository you will have a folder called printf. In here there will be several files that allow the function to work.

The main code of the printf function

