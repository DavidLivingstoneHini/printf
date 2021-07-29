#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_unsigned - prints unsigned 
 * @u the unsigned
 * Return: 1
 */

int print_unsigned(va_list u)
{
int len, pow, j, digit, n, count, num;
count = 0;
n = va_arg(u, int);
if (n != 0)
{
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
