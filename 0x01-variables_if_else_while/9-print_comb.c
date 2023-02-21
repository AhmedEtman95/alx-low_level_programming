#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
* Return: Always (Success)
*
*/

int main(void)

{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
		}
		putchar(' ');
	}
	return (0);
}
