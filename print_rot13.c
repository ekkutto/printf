#include "main.h"
/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot13(va_list args)
{
	int i, l, counter = 0;
	int p = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (l = 0; alpha[l] && !p; l++)
		{
			if (s[i] == alpha[l])
			{
				_putchar(beta[l]);
				counter++;
				p = 1;
			}
		}
		if (!p)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
