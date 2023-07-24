#include "main.h"

/**
 * printf_rev - function that prints a str in reverse
 * @ag: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_rev(va_list ag)
{

	char *p = va_arg(ag, char*);
	int i;
	int k = 0;

	if (p == NULL)
		p = "(null)";
	while (p[k] != '\0')
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchar(p[i]);
	return (k);
}
