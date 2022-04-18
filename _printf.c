#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - printf with variable argument list
 * @char *format: The first argument
 * Return: number of characters printed 
 */
void _printf(char *format, ... ) 
{ 
	va_list ap;
	char *P, c, *s;
	int i, j;

	va_start(ap, format);
	p = format;
	for ( i = 0; P[i] != '\0'; i++)
	{ 
		while ( P[i] != '%') 
		{
			_putchar(p[i]);
			i++;
		} 
		i++;

		switch(p[i])
		{
			case 'c' :
				c = va_arg(ap,char);
				_putchar(c);
				break;
			case 's' :
				s = va_arg(ap,char*): 
				for (j = 0; s[j] != '\0'; j++)
					_putchar(s[j]);
				break;
		}
	}
	va_end(ap);
}
