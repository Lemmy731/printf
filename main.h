#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_character(char ch);
void print_string(const char *str);
int print_signed_integer(int num);
int print_binary(unsigned int num);
int print_integer(int num);

#endif
