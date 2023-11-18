#include "main.h"

/**
 * fetch_func - returns the appropriate action function
 * that gets the next va_arg argument on the va_list
 * @c: pointer to identifier character
 * Return: pointer to action function
 */
int (*fetch_func(char c))(va_list)
{
	int i;
	fmt_t fmt_funcs[] = {
		{'d', print_digit},
		{'i', print_digit},
		{'x', print_hex},
		{'c', print_char},
		{'s', print_str},
		{'%', print_pcnt},
		{'b', int_binary},
		{'r', str_rev},
		{'\0', NULL}
	};

	i = 0;
	while (fmt_funcs[i].c)
	{
		if (c == fmt_funcs[i].c)
			return (fmt_funcs[i].action_func);
		i++;
	}
	return (fmt_funcs[i].action_func);
}

/**
 * _print_digit - a recursive utility function to print
 * digits to different base
 * @n: number to be printed
 * @base: base specifier
 * Return: number of bytes written to stdout
 */
int _print_digit(long num, int base)
{
	int count;
	char *symbols = "0123456789abcdef";

	count = 0;
	if (num < 0)
	{
		_putchar('-');
		return (_print_digit(-num, base) + 1);
	}
	else if (num < base)
		return (_putchar(symbols[num]));
	else
	{
		count = _print_digit(num / base, base);
		return (count + _print_digit(num % base, base));
	}
}
