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
	int c3;

	for (c = 0; c <= 8; c++)
	{
		for (c2 = c + 1; c2 <= 9; c2++)
		{
			for (c3 = c2 + 1; c3 <= 9; c3++)
			{
				putchar(c + '0');
				putchar(c2 + '0');
				putchar(c3 + '0');
				if (c < 7 || c2 < 8 || c3 < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
