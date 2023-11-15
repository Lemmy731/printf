#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_decimal(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int printf_char(va_list args);
int printf_string(va_list args);
int print_percent(void);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_hex_lower_extension(unsigned long int number);
int print_hex_upper_extension(unsigned int value);
int print_non_printable_string(va_list args);
int print_pointer(va_list args);



#endif
