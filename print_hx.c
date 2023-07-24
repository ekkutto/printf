#include "main.h"

/**
 * printf_hex - prints an hexadecimal number.
 * @vl: arguments.
 * Return: counter.
 */
int printf_hex(va_list vl)
{
	int a;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(vl, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		array[a] = temp % 16;
		temp /= 16;
	}
	for (a = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
