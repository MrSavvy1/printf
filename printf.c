#include "main.h"

/*
 * _printf - a clone of the standard printf function
 * @fmt: format string
 * Return: number of bytes written or printed
 */

int _printf(char *fmt, ...)
{
	va_list args;
	int count;
	int (*match_func)(va_list *);

	count = 0;
	va_start(args, fmt);

	while(fmt != '\0')
	{
		fmt++;
	}
	return count;
}
