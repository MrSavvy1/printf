#include "main.h"
/*int_binar - writes or converts unsignedinteger
 * to binary number
 * @va_list - number of unsigned int
 * Return - The counter for the written byte 
*/

int int_binary (va_list args) 
{
	unsigned int *zero;
	int num;
	int bin;
	
	num = 0;
	zero = va_arg(args, unsigned int *);
	if (zero == 0)
	{
		write(1, &zero, 1);
		return num++;
	}
	
	bin[32];
	for (num; zero > 0; )
	{
		bin[num++] = zero % 2;
		zero /= 2;
	}
	for (int i = num - 1; i >= 0; i--)
	{
		write(1, binary[i], 1);
	}
	return num;
}
