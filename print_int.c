#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_int - prints decemal 
 * @d: the dec
 * Return: 1
 */

int print_int(va_list i)
{
va_arg(i, int);
return (1);
}
