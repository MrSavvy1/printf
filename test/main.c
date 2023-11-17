#include "../main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n;

	n = _printf("Hello %s, char->%c. This should print a percent %%\n", "Ezekiel", 'z');
	_printf("Number of bytes written is %p\n", &n);
	_printf("Number of bytes written is %X\n", n);
	printf("Number of bytes written is %p\n", &n);
	return (0);
}
