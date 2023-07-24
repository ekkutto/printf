#include "main.h"

/**
 * printf_oc - prints an octal number.
 * @vl: arguments.
 * Return: counter.
 */
int printf_oc(va_list vl)
{
	int k;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(vl, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (k = 0; k < counter; k++)
	{
		array[k] = temp % 8;
		temp /= 8;
	}
	for (k = counter - 1; k >= 0; k--)
	{
		_putchar(array[k] + '0');
	}
	free(array);
	return (counter);
}
