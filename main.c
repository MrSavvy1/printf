#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	n = 0;
	/*printf("Test what happens with %              printed");*/
	n = _printf("Hello %s, char->%c\n", "Ezekiel", 'z');
	printf("Number of bytes written is %d\n", n);
	return (0);
}
