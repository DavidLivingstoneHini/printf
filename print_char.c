#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - writes the character c
 * @c: the character to be printed
 * Return: 1
 */

int print_char(va_list c)
{
unsigned char my_char;
my_char = va_arg(c, int);
_putchar(my_char);
return (1);
}

/**
 * print_persent - prints %
 * Return 1
 */
int print_percentage(void)
{
_putchar('%');
return (1);
}
