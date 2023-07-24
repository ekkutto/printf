#include "main.h"

/**
 * printf_h_ax - prints an hexgecimal number.
 * @n: arguments.
 * Return: counter.
 */
int printf_h_ax(unsigned long int n)
{
	long int a;
	long int *array;
	long int counter = 0;
	unsigned long int temp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (a = 0; a < counter; a++)
	{
		array[a] = temp % 16;
		temp /= 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
