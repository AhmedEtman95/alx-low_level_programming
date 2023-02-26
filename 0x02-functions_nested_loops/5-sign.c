#include <stdio.h>

/**
* print_sign - prints sign
*
* @i: the integer number that you want to check as per ASCII
*
* Return: 1 if greater than 0, 0 if 0 and -1 if less than 0
*/

int print_sign(int i)
{
	int result;

	if (i > 0)
	{
		result = 1;
		putchar('+');
	}
	else if (i == 0)
	{
		result = 0;
		putchar('0');
	}
	else
	{
		result = -1;
		putchar('-');

	}

	putchar(result + '0');
	return (result);
}
