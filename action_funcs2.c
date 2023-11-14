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
