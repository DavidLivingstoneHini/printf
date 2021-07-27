#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int printf_int(va_list i);
int printf_bin(va_list b);
int print_dec(va_list d);
int print_unsigned(va_list u);
int print_octal(va_list o);
int print_hex(va_list h);
int print_HEX(va_list H);
int print_rev(va_list r);
int print_rot13(va_list R);

/**
 * struct c_format - structure format
 * @sc: specifier
 * @f: func
 */
typedef struct c_format
{
char *sc;
int (*f)(va_list);
} find_f;

#endif
