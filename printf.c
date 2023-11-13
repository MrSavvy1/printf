#include "main.h"

/**
 * _printf - a clone of the standard printf function
 * @fmt: format string
 * Return: number of bytes written or printed
 */

int _printf(const char *fmt, ...)
{
	va_list args;
	int count;
	int (*action_func)(va_list);

	count = 0;
	va_start(args, fmt);

	while (fmt && *fmt != '\0')
	{
		if (*fmt == '%')
		{
			fmt++;
			action_func = fetch_func(*fmt);
			if (!action_func)
				unknown(*fmt);
			count += action_func(args);
		}
		else
			count += write(1, fmt, 1);
		fmt++;
	}
	return (count);
}
