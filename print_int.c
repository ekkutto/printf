#include "main.h"
/**
 * printf_int - prints integer
 * @ag: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list ag)
{
	int m = va_arg(ag, int);
	int num, last = m % 10, digit, exp = 1;
	int i = 1;

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

/**
 * printf_dec - prints decimal
 * @ag: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list ag)
{
	int m = va_arg(ag, int);
	int num, last = m % 10, digit;
	int  i = 1;
	int exp = 1;

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
