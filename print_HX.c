#include "main.h"

/**
 * printf_HX - prints an hexadecimal number.
 * @vl: arguments.
 * Return: counter.
 */
int printf_HX(va_list vl)
{
	int x;
	int *arr;
	int ct = 0;
	unsigned int n = va_arg(vl, unsigned int);
	unsigned int tmp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		ct++;
	}
	ct++;
	arr = malloc(ct * sizeof(int));

	for (i = 0; i < ct; x++)
	{
		arr[i] = tmp % 16;
		tmp /= 16;
	}
	for (x = ct - 1; x >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 7;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (ct);
}
