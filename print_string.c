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
int len = 0;
st = va_arg(str, char *);
if (st == NULL)
{
st = "(null)";
 len = _strlen(st);
while (i < len)
{
_putchar(st[i]);
i++;
}
return (len);
}
else
{
len = _strlen(st);
while (i < len)
{
_putchar(st[i]);
i++;
}
return (len);
}
}
