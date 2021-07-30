# include "holberton.h"

/**
 * rot13 - main function
 * @y: The argument pointer.
 *
 * Description: This function prints the rot13'ed string.
 *
 * Return: The total number of characters.
 */
int print_rot13(va_list R)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j, i = 0, count = 0, pl = 0;
	char *s = va_arg(R, char*);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		pl = 0;
		for (j = 0; alph[j] != '\0' && !pl; j++)
		{
			if (s[i] == alph[j])
			{
				_putchar(rot13[j]);
				count++;
				pl = 1;
			}
		}
		if (!pl)
		{
			_putchar(s[i]);
			count++;
		}
		i++;
	}
	return (count);
}
