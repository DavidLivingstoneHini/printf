#include "holberton.h"
/**
 * _printf - print format string
 * @format: string
 *
 * Return: num of chars print
 */
int _printf(const char *format, ...)
{
	int (*f)(va_list);
	va_list list;
	int l = 0;

	if (!format)
		return (-1);

	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
			l += _putchar(*format);
		else
		{
			if (*(++format) != '%')
				format--;
			else
			{
				l += _putchar(*format++);
				continue;
			}
			if (*(++format) == 0)
				return (-1);
			format--;
			f = get_func(++format);
			if (!f)
			{
				l += _putchar('%');
				l += _putchar(*format);
			}
			else
				l += (f(list));
		}
		format++;
	}
	va_end(list);
	return (l);
}
