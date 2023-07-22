#include "main.h"
/**
 * printf_excl_str - print exclusuive string.
 * @vl: argument.
 * Return: the length of the string.
 */

int printf_excl_str(va_list vl)
{
	char *b;
	int x, len = 0;
	int cst;

	b = va_arg(vl, char *);
	if (b == NULL)
		b = "(null)";
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] < 32 || b[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cst = b[x];
			if (cst < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_H_AX(cst);
		}
		else
		{
			_putchar(b[x]);
			len++;
		}
	}
	return (len);
}
