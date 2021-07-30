#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - prints character
 * @c: char to be prited
 * Return 1
 */

int print_char(va_list c)
{
unsigned char my_ch;
my_ch = va_arg(c, int);
_putchar(my_ch);
return (1);
}

/**
 * print_percent - prints persentage
 * Return: 1
 */
int print_percent(void)
{
_putchar('%');
return (1);
}
