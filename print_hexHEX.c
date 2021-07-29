#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_hexHEX - prints hexadecimals 
 * @n: to be printed
 * @c: case
 * Return: size
 */

int print_hexHEX(unsigned int n, unsigned int c)
{
int len, pow, j, digit, count, num;
char d;
count = 0;
if (n != 0)
{
num = n;
len = 0;
if (c)
d = 'A' - ':';
else
d = 'a' - ':';
while (num != 0)
{
num /= 16;
len++;
}
pow = 1;
for (j = 1; j <= len - 1; j++)
pow *= 16;
for (j = 1; j <= len; j++)
{
digit = n / pow;
if (digit < 10)
_putchar(digit + '0');
 else
_putchar(digit + '0' + d);
count++;
n -= (digit * pow);
pow /= 16;
}
}
else
{
_putchar('0');
return (1);
}
return (count);
}

/**
 * print_hex - lowercase hex
 * @x: unsigned int
 * Return: size
 */
int print_hex(va_list x)
{
return (print_hexHEX(va_arg(x, unsigned int), 0));
}

/**
 * print_HEX - uppercase hex
 * @X: unsigned int
 * Return: size
 */
int print_HEX(va_list X)
{
return (print_hexHEX(va_arg(X, unsigned int), 1));
}
