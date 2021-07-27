#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_string - prints the string
 * @str: the string to be printed
 * Return: i
 */
int print_string(va_list str)
{
char *st;
int i = 0;
st = va_arg(str, char *);
if (st == NULL)
st = "(null)";
while (st[i])
{
_putchar(st[i]);
i++;
}
return (i);
}
