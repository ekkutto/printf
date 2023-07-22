#include "main.h"

/**
 * printf_ch - prints a char.
 * @vl: arguments.
 * Return: 1.
 */
int printf_ch(va_list vl)
{
	char b;

	b = va_arg(vl, int);
	_putchar(b);
	return (1);
}
