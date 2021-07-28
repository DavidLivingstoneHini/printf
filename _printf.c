#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
<<<<<<< HEAD
 * find_correct_func - finds the match func
 * @format: format
 * Return: null
 */
=======
 * _printf - printsand formats strings
 *
 * @format: format string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};
>>>>>>> 9a7f8eb50fa4d8f3b4359df0152103dcc1ac495e

int (*find_correct_func(const char *format))(va_list)
{
unsigned int i = 0;
code_f find_f[] = {
{"c", print_char},
{"s", print_string},
{"i", print_int},
{"d", print_dec},
{"r", print_rev},
{"b", print_bin},
{"u", print_unsigned},
{"o", print_octal},
{"x", print_hex},
{"X", print_HEX},
{"R", print_rot13},
{NULL, NULL}
};
while (find_f[i].sc)
{
if (find_f[i].sc[0] == (*format))
return (find_f[i].f);
i++;
}
return (NULL);
}

/**
 * _printf - produces according to the output
 * @format: format
 * Return: size
 */
int _printf(const char *format, ...)
{
va_list list;
int (*f)(va_list);
unsigned int i = 0, len = 0;
if (format == NULL)
return (-1);
va_start(list, format);
while (format[i])
{
while ((format[i] != '%') && format[i])
{
_putchar(format[i]);
len++;
i++;
}
if (format[i] == '\0')
return (len);
f = find_correct_func(&format[i + 1]);
if (f != NULL)
{
len += f(list);
i += 2;
continue;
}
if (!format[i + 1])
return (-1);
_putchar(format[i]);
len++;
if (format[i + 1] == '%')
i =+ 2;
else
i++;
}
va_end(list);
return (len);
}
