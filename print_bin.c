#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @vl: arguments.
 * Return: 1.
 */
int printf_bin(va_list vl)
{
	int fl = 0;
	int ct = 0;
	int x, z = 1, v;
	unsigned int n = va_arg(vl, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((z << (31 - x)) & n);
		if (p >> (31 - x))
			fl = 1;
		if (fl)
		{
			v = p >> (31 - x);
			_putchar(v + 48);
			ct++;
		}
	}
	if (ct == 0)
	{
		ct++;
		_putchar('0');
	}
	return (ct);
}
