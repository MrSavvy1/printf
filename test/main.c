#include "../main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	n = 0;
	/*printf("Test what happens with %              printed");*/
	n = printf("Hello %s, char->%c. This should print a percent %%. Print this number -> %R\n", "Ezekiel", 'z');
	printf("Number of bytes written is %d\n", n);
	return (0);
}
