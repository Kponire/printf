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
		s = "(null)";
	}
	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length--)
	{
		str = s[i];
		s[i++] = s[length];
		s[length] = str;
	}
/**
	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
*/
	return (i);
}
