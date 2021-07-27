#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - writes the character c
 * @ch: the character to be printed
 * Return: 1
 */

int print_char(va_list ch)
{
char c;
c = va_arg(ch, int);
_putchar(c);
return (1);
}


/**
 * print_persent - prints %
 * Return 1
 */
void print_persent(void)
{
_putchar('%');
return (1);
}
