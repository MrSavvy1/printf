#include "main.h"

/**
 * fetch_func - returns the appropriate action function
 * that gets the next va_arg argument on the va_list
 * @char: pointer to identifier character
 * Return: pointer to action function
 */
int (*fetch_func(char c))(va_list)
{
	int i;
	fmt_t fmt_funcs[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pcnt},
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
 * write_func - writes n number of bytes from buf to stdout
 * using write() function
 * @buf: memory location to read bytes from
 * @n: number of bytes to be read
 * Return: number of bytes written to stdout or -1 on failure
 */
/*int write_func(char *buf, int n)
{
	int n_bytes;

	n_bytes = write(1, buf, n);
	if (n_bytes < n)
		return (-1);
	return (n_bytes);
}*/
