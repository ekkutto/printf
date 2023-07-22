#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_pointer(va_list val)
{
	void *k;
	char *j = "(nil)";
	long int b;
	int c;
	int i;

	k = va_arg(val, void*);
	if (k == NULL)
	{
		for (i = 0; j[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	b = (unsigned long int)k;
	_putchar('0');
	_putchar('x');
	c = printf_hex_aux(b);
	return (c + 2);
}
