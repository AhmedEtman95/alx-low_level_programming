#include <stdio.h>

/**
* main - Prints the alphabet in lowercase, followed by a new line
* Return: Always (Success)
*
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
