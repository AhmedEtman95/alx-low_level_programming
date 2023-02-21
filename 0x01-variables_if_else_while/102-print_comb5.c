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
	int c4;
	for (c = 0; c <= 9; c++)
	{
		for (c2 = 0; c2 <= 8; c2++)
		{
			for (c3 = c; c3 <= 9; c3++)
			{
				for (c4 = c2+1; c4 <= 9; c4++)
				{
					putchar(c + '0');
					putchar(c2 + '0');
					putchar(' ');
					putchar(c3 + '0');
					putchar(c4 + '0');
					if (!(c == 9 && c2 == 8 && c3 == 9 && c4 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
