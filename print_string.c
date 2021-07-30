#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_string - prints string
 * @s: string to be printed
 * Return: i
 */
int print_string(va_list s)
{
char *my_str;
int i = 0;
my_str = va_arg(s, char *);
if (my_str == NULL)
my_str = "(null)";
while (my_str[i])
{
_putchar(my_str[i]);
i++;
}
return (i);
}
