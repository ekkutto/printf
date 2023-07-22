#include "main.h"
/**
 * _printf - selects the function to print.
 * @format: identifier to look for.
 * Return:  length
 */
int _printf(const char * const format, ...)
{
	cm m[] = {
		{"%s", printf_str}, {"%c", printf_ch},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_rev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_uns},
		{"%o", printf_oc}, {"%x", printf_hx}, {"%X", printf_HX},
		{"%S", printf_excl__str}, {"%p", printf_ptr}
	};

	va_list ag;
	int x = 0, z, len = 0;

	va_start(ag, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		z = 13;
		while (z >= 0)
		{
			if (m[z].id[0] == format[x] && m[z].id[1] == format[x + 1])
			{
				len += m[z].f(ag);
				x = x + 2;
				goto Here;
			}
			z--;
		}
		_putchar(format[x]);
		len++;
		x++;
	}
	va_end(ag);
	return (len);
}
