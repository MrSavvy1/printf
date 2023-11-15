#include "../main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n = 98;

	_printf("Hello %s, char->%c. This should print a percent %%\n", "Ezekiel", 'z');
	_printf("Number of bytes written is %x\n", n);
	return (0);
}
