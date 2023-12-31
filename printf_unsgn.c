#include "main.h"
/**
 * printf_uns - prints integer
 * @ag: argument to print
 * Return: number of characters printed
 */
int printf_uns(va_list ag)
{
	unsigned int m = va_arg(ag, unsigned int);
	int num, last = m % 10, digit, exp = 1;
	int  i = 1;

	m = m / 10;
	num = m;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		m = -m;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
