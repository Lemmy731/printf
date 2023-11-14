#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - Printf conversion specifier
 * @specifier: Type char pointer of the specifier
 * @handler: Function for the conversion specifier
 *
 * Description: This structure pairs a conversion
 * specifier with its corresponding handler function.
 */
typedef struct format
{
    char *specifier;
    int (*handler)();
} format;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list args);
int printf_string(va_list args);
int print_signed_integer(int num);
int print_binary(unsigned int num);
int print_integer(int num);

#endif
