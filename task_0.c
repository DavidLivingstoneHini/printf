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

/**
 * print_string - prints string
 * @s: string to be printed
 * Return: 1
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
return (1);
}
