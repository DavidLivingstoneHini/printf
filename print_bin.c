#include <stdarg.h>
#include "holberton.h"


void convert_and_print(unsigned int num, int *count);

/**
 * print_bin - prints int to binary
 * b: pointer to unsigned int
 * Return: integer, number of characters printed
 */

int print_bin(va_list b)
{
	unsigned int num = va_arg(b, unsigned int);
	int count = 0;

	convert_and_print(num, &count);

	return (count);
}

/**
 * convert_and_print - converts int to binary, then prints
 * @num: unsigned int
 * @count: pointer to count the iteration
 */

void convert_and_print(unsigned int num, int *count)
{
	if (num / 2)
		convert_and_print(num / 2, count);

	_putchar((num % 2) + '0');

	(*count)++;
}
