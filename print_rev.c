#include "main.h"


/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

int rev_string(va_list pfList)
{

	int len = 0, index = 0;
	char tmp;
	char *s;

	s = va_arg(pfList, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
	return (len - 1);
}
