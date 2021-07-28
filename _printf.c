#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - printsand formats strings
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
}
