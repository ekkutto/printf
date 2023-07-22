#include "main.h"

/**
 * _putchar - writes character to stdout
 * @c: input
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
