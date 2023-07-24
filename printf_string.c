#include "main.h"
/**
 * printf_str - print a string.
 * @vl: argument.
 * Return: the length of the string.
 */

int printf_str(va_list vl)
{
	char *s;
	int x, len;

	s = va_arg(vl, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
}
