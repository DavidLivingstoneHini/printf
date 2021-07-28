#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * printf_bin - prints the binary number
 * @list: argument
 * Return: count;
 */

int printf_bin(va_list list)
{
int flag = 0;
int count = 0;
int n = va_arg(list, int);
int p;
int i, x = 1, y;
for (i = 0; i < 32; i++)
{
p = ((x << (31 - i)) & n);
if (p >> (31 - i))
flag = 1;
if (flag)
{
y = p >> (31 - i);
_putchar(y + 48);
count++;
}
}
if (count == 0)
{
count++;
putchar('0');
}
return (count);
}
