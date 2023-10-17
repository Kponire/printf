#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @pfList: the input string
 * Return: the encoded string
 */

int print_rot13(va_list pfList)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j;
	char *str;

	str = va_arg(pfList, char *);
	if (str == NULL)
		str = "(null)";
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				_putchar(s[i]);
				break;
			}
		}
		i++;
	}
	return (i);
}
