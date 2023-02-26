#include <stdio.h>

/**
* _islower - Checks if i is an alpha or not
*
* @i: the integer number that you want to check as per ASCII
*
* Return: 0 if not an alpha, 1 if a lower case
*/

int _isalpha(int i)
{
	int result;

	if ((i >= 97 && i <= 122) || (i>=65 && i<=90))
		result = 1;
	else
		result = 0;

	return (result);
}
