#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_dec - print dec
 * @list: argument
 * Return: num of chars
 */
int print_dec(va_list list)
{
int n = va_arg(list, int);
int num, last, digit, expo, i;
i = 1;
expo = 1;
last = n % 10;
n /= 10;
num = n;
if (last < 0)
{
_putchar('-');
n = -n;
num = - num;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
expo *= 10;
num /= 10;
}
num = n;
while (expo > 0)
{
digit = num / expo;
_putchar(digit + '0');
num -= (digit * expo);
expo /= 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
