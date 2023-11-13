#include "main.h"

/**
 * print_char - prints a character to stdout
 * @args: list of variable arguments
 * Return: number of bytes written to stdout
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_str - prints a string to stdout
 * @args: list of variable arguments
 * Return: number of bytes written to stdout
 */
int print_str(va_list args)
{
	char *s;
	int count;

	count = 0;
	s = va_arg(args, char *);
	/* subject to refactoring */
	/* introduce a strlen func to get the length of the string */
	/* and call write only once without the need for a loop */
	while (*s)
		count += write(1, s++, 1);
	return (count);
}

/**
 * print_pcnt - prints a percentage symbol to stdout
 * @args: list of variable arguments
 * Return: number of bytes written to stdout
 */
int print_pcnt(va_list args)
{
	(void) args;
	return (_putchar('%'));
}