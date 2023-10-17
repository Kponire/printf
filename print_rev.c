#include "main.h"


/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

int rev_string(va_list pfList)
{

	int length = 0, i = 0;
	char *s;
	char str;

	s = va_arg(pfList, char *);
	if (s == NULL)
	{
		s = ")llun(";
	}
	while (s[length] != '\0')
	{
		length++;
	}
	while (; length > 0; length--)
	{
		_putchar(s[length]);
		i++;
	}
	return (i);
}
