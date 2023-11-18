#include "main.h"

/**
 * int_binary - writes or converts unsigned integer
 * to binary number
 * @args: number of unsigned int
 * Return: The counter for the written byte
*/

int int_binary(va_list args)
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 2);

	return (count);
}

<<<<<<< HEAD
/*---------------------------------*/

int str_rev(va_list args)
{
	char *s;
	int count;

	count = 0;
	s = va_arg(args, char *);
	
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (*s)
		count += write(1, --s, 1);
=======
/**
 * print_hex_caps - prints the character in caps
 * @args: variable arguments list
 * Return: number of bytes printed
 */
int print_hex_caps(va_list args)
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 16, UPPER);

	return (count);
}

/**
 * print_oct - prints a number in octal
 * @args: variable argument list
 * Return: number of bytes printed to stdout
 */
int print_oct(va_list args)
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 8);

	return (count);
}

/**
 * print_unsigned - prints an unsigned decimal number
 * @args: variable arguments list
 * Return: number of bytes printed to stdout
 */
int print_unsigned(va_list args)
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 10);

	return (count);
}

/**
 * print_custom_str - prints the string.
 * Non printable characters (0 < ASCII value < 32 or >= 127) are printed
 * this way \x, followed by the ASCII code value
 * in hexadecimal (upper case - always 2 characters)
 * @args: variable arguments list
 * Return: number of bytes printed to stdout
 */
int print_custom_str(va_list args)
{
	int count;
	char *s;

	count = 0;
	s = va_arg(args, char *);

	if (s == NULL)
		return (write(1, "(null)", 6));

	while (*s)
	{
		if ((*s > 0 && *s < 32) || *s >= 127)
		{
			count += write(1, "\\x", 2);
			if (*s < 16)
				count += _putchar('0');
			count += _print_digit((long)(*s), 16, UPPER);
			s++;
			continue;
		}
		count += _putchar(*s);
		s++;
	}
	return (count);
}

/**
 * print_addr - prints memory address in hex
 * @args: variable argument list
 * Return: number of bytes written to stdout
 */
int print_addr(va_list args)
{
	int count;
	unsigned long n;

	count = 0;
	n = va_arg(args, unsigned long);

	if (!n)
		return write(1, "(nil)", 5);

	count += write(1, "0x", 2);
	count += _print_digit((long)n, 16);
>>>>>>> 2630fa26f81cf67642035b74d5b467991d2de2df
	return (count);
}
