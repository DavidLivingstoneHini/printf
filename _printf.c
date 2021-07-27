#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * find_char_func - func that finds formats
 * @format: format
 * Return: NULL
 */
int (*find_char_func(const char *format))(va_list)
{
unsigned int i = 0;
find_f c[] = {
{"c", print_char},
{"s", print_string},
{"d", print_dec},
{"i", printf_int},
{"b", printf_bin},
{"r", print_rev},
{"u", print_unsigned},
{"o", print_octal},
{"x", print_hex},
{"X", print_HEX},
{"R", print_rot13},
{NULL, NULL}
};
while (c[i].sc)
{
if (c[i].sc[0] == (*format))
return (c[i].f);
i++;
}
return (NULL);
}

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Return: length of the formatted output string
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
while (format[i] != '%' && format[i])
{
_putchar(format[i]);
len++;
i++;
}
if (format[i] == '\0')
return (len);
f = find_char_func(&format[i + 1]);
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
i += 2;
else
i++;
}
va_end(list);
return (len);
}
