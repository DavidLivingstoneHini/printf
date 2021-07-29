#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
static inline int (*find_correct_func(const char *format))(va_list)
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_octal(va_list o);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_rot13(va_list R);

/**
 * struct code_format - strucure format
 * @sc: specifier
 * @f: func
 */
typedef struct code_format
{
char *sc;
int (*f)(va_list);
} code_f;

#endif
