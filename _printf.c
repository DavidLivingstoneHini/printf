<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * find_correct_func - finds the correct func
 * @format: format
 * Return: NULL
 */

int (*find_correct_func(const char *format))(va_list)
{
unsigned int i = 0;
code_f find_f[] = {
{"c", print_char},
{"s", print_string},
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
 * _printf - prints the output accordint to the format
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
while (format[i] != '%' && format[i])
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
i += 2;
else
i++;
}
va_end(list);
return (len);
=======
#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - prints and formats strings
 *
 * @format: format string
 *
 * Return: number of charachters printed
 */

int _printf(const char *format, ...)
{
	int print_count = 0;
	va_list arg_list;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arg_list, format);

	print_count = parser(format, arg_list);

	va_end(arg_list);

	return (print_count);
>>>>>>> 3c3c1e283cb4f0d41de9b1e4011467cf09c95f5d
}
