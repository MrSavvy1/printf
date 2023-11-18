#include "main.h"
/*int_binar - writes or converts unsignedinteger
 * to binary number
 * @va_list - number of unsigned int
 * Return - The counter for the written byte 
*/

int int_binary (va_list args) 
{
	unsigned int n;
	int count;

	count = 0;
	n = va_arg(args, unsigned int);
	count += _print_digit((long)n, 2);

	return (count);
}

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
	return (count);
}
