#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
* Return: Always (Success)
*
*/

int main(void)

{
	int c;

	for (c = 0; c <= 8; c++)
	{
		putchar(c + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(c + '0');
	return (0);
}
