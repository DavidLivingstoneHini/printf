#include <unistd.h>
<<<<<<< HEAD

/**
 * _putchar - fun used to print
 * @c: chars to be printed
 * Return: 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
=======
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> 3c3c1e283cb4f0d41de9b1e4011467cf09c95f5d
}
