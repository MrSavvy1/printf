#include "../main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n = 0x12;

	_printf("Hello %s, char->%c. This should print a percent %%\n", "Ezekiel", 'z');
	_printf("Number of bytes written is %d\n", n);
	return (0);
}
