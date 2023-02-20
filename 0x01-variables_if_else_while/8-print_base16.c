#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowercase
* Return: Always (Success)
*
*/

int main(void)

{
	char c;

	for (c = '0'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
