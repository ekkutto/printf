#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_srev(va_list args)
{

	char *p = va_arg(args, char*);
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
