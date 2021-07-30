#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_int - prints integer
 * @i: integer to be printed
 * Return: size
 */

int print_int(va_list i)
{
int len, pow, j, digit, n, count, num;
count = 0;
n = va_arg(i, int);
if (n != 0)
{
if (n < 0)
{
_putchar('-');
count++;
}
num = n;
len = 0;
while (num != 0)
{
num /= 10;
len++;
}
pow = 1;
for (j = 1; j <= len - 1; j++)
pow *= 10;
for (j = 1; j <= len; j++)
{
digit = n / pow;
if (n < 0)
_putchar((digit * -1) + 48);
else
_putchar(digit + '0');
count++;
n -= (digit * pow);
pow /= 10;
}
}
else
{
_putchar('0');
return (1);
}
return (count);
}
