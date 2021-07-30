#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_rev - prints reverse of string
 * @r: string to be reversed
 * Return: size
 */

int print_rev(va_list r)
{
char *st;
int i = 0, j = 0;
st = va_arg(r, char *);
if (st == NULL)
st = ")llun(";
while (st[i] != '\0')
i++;
for (i -= 1; i >= 0; i--)
{
_putchar(st[i]);
j++;
}
return (j);
}
