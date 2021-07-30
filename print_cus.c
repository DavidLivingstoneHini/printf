#include "holberton.h"

/**
  * print_S - prints custom specifier
  * @list: va_list
  * Return: number of characters printed
  */
int print_S(va_list S)
{
int count = 0, i = 0;
char *str = va_arg(S, char *);
char c;

if (str == NULL || *str == '\0')
return (0);

while (str[i])
{
c = str[i];
if ((c > 0 && c < 32) || c >= 127)
{
count += _putchar('\\');
count += _putchar('x');
count += _putchar('0');
count += _printf("%X", (unsigned int) c);
}
else
{
count += _putchar(c);
}
i++;
}
return (count);
}
