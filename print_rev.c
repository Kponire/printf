#include "main.h"


/**
 * rev_string - Reverses a string
 * @pfList: the argument in the va_list
 * Return: the length of the string
 */

int rev_string(va_list pfList)
{

	int length = 0, i = 0;
	char *s;

	s = va_arg(pfList, char *);
	if (s == NULL)
	{
		s = ")llun(";
	}
	while (s[length] != '\0')
	{
		length++;
	}
	for (; length >= 0; length--)
	{
		_putchar(s[length]);
		i++;
	}
	return (i);
}
