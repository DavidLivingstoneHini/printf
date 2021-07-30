#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_rot13 - prints rot13 encoding
 * @R: binary to be printed
 * Return: size
 */

int print_rot13(va_list R)
{
int i, j, count = 0;
char *r;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
char ou[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";
r = va_arg(R, char *);
if (r == NULL)
r = "(null)";
for (j = 0; r[j] != '\0'; j++)
{
for (i = 0; in[i] != '\0'; i++)
{
if (r[j] == in[i])
{
_putchar(ou[i]);
count++;
break;
}
}
}
return (count);
}
