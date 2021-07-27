#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * printf_unsigned - prints unsigned values
 * @list: argument
 * Return: num of chars to be printed
 */

int printf_unsigned(va_list list)
{
int n = va_arg(list, int);
int num, last_digit, digit, expo;
last_digit = n % 10;
expo = 1;
int i = 1;
n /= 10;
num = n;
if (last_digit < 0)
{
_putchar('-');
n = -n;
num = -num;
last_digit = -last_digit;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
expo *= 10;
num /= 10;
}
num = 0;
while (expo > 0)
{
digit = num / expo;
_putchar(digit + '0');
num = num - (digit * expo);
expo /= 10;
i++;
}
}
_putchar(last_digit + '0');
return (i);
}
