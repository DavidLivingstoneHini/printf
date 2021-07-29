#include <unistd.h>

/**
 * _putchar - fun used to print
 * @c: chars to be printed
 * Return: 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
