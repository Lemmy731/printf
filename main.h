#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list args);
int printf_string(va_list args);
int print_signed_integer(int num);
int print_binary(unsigned int num);
int print_integer(int num);
int print_chars(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_strings(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percents(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_ints(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binarys(va_list types, char buffer[],
	int flags, int width, int precision, int size);
#endif
