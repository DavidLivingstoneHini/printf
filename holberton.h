#ifndef HOLBERTON_H
#define HOLBERTON_H
#define INT_DEC_SIZE (sizeof(int) * (CHAR_BIT / 3 + 3))
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>
/**
 * struct print_methods - struct for all print identifiers
 *
 * @fid: the identifier
 * @func: the function to return to print as needed by the identifier
 */
typedef struct print_methods
{
	char *fid;
	int (*func)(va_list list);
} print_methods;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(const char *s))(va_list);

int cb_print_string_r(va_list list);
int cb_print_string(va_list list);
int cb_print_char(va_list list);
int cb_print_integers(va_list list);
int cb_print_binary(va_list list);
int cb_print_rot13(va_list list);

void _itoa(int value, char *str, int base);
void _unsigneditoa(unsigned int value, char *str, int base);
void _octalitoa(int value, char *str, int base);
int cb_print_unsigned_integers(va_list list);
int cb_print_octal_integers(va_list list);
int cb_print_hex_integers(va_list list);
int cb_print_hex_capital_integers(va_list list);
int cb_print_pointers(va_list list);
#endif /* HOLBERTON_H */
