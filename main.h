#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct form - match the conversion specifiers
 * @wh: char pointer to the specifier
 * @f: function pointer to the conversion specifier
 *
 */

typedef struct form
{
	char *wh;
	int (*f)();
} cm;

int printf_ptr(va_list vl);
int printf_h_ax(unsigned long int n);
int printf_H_AX(unsigned int n);
int printf_excl_str(va_list vl);
int printf_HX(va_list vl);
int printf_hx(va_list vl);
int printf_oc(va_list vl);
int printf_uns(va_list ag);
int printf_bin(va_list vl);
int printf_rev(va_list ag);
int printf_rot13(va_list ag);
int printf_int(va_list ag);
int printf_dec(va_list ag);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_str(char *s);
int printf_37(void);
int printf_ch(va_list vl);
int printf_str(va_list vl);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
