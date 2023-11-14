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
		{'c', print_char},
		{'s', print_str},
		{'%', print_pcnt},
		{'b', int_binary},
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
