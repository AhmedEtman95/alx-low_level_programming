#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
* Return: Always (Success)
*
*/

int main(void)

{
	int c;
	int c2;

	for (c = 0; c <= 8; c++)
	{
		for (c2 = c + 1; c2 <= 9; c2++)
		{
			putchar(c + '0');
			putchar(c2 + '0');
			if (c2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
