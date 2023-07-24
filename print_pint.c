#include "main.h"

/**
 * printf_ptr - prints an hexadecimal number.
 * @vl: arguments.
 * Return: counter.
 */
int printf_ptr(va_list vl)
{
	void *k;
	char *j = "(nil)";
	long int b;
	int c;
	int i;

	k = va_arg(vl, void*);
	if (k == NULL)
	{
		for (i = 0; j[i] != '\0'; i++)
		{
			_putchar(j[i]);
		}
		return (i);
	}

	b = (unsigned long int)k;
	_putchar('0');
	_putchar('x');
	c = printf_h_ax(b);
	return (c + 2);
}
