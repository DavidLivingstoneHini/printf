#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_octal - prints octal
 * @o: octal to be printed
 * Return: size
 */

int print_octal(va_list o)
{
unsigned int len, pow, j, digit, n, num;
int count = 0;
n = va_arg(o, unsigned int);
if (n != 0)
{
num = n;
len = 0;
while (num != 0)
{
num /= 8;
len++;
}
pow = 1;
for (j = 1; j <= len - 1; j++)
pow *= 8;
for (j = 1; j <= len; j++)
{
digit = n / pow;
_putchar(digit + '0');
count++;
n -= (digit * pow);
pow /= 8;
}
}
else
{
_putchar('0');
return (1);
}
return (count);
}
