#include "main.h"
/**
 * str_rev - prints string i a reversed format
 * @args: variale argument
 * Return: number of byte printed
 */
int str_rev(va_list args)
{
	char *s;
	int count;
	int i;
	char strin;

	count = 0;
	i = 0;
	s = va_arg(args, char *);
	if (s == NULL)
	{
		return (write(1, "(null)", 6));
	}
	while (*s && s[i] != '\0')
	{
		strin = s[i];
		i += 1;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		count += write(1, &s[j], 1);
	}
	return (count);
}
