#include <stdio.h>

/**
* _islower - Checks if i is a lower case or not
*
* @i: the integer number that you want to check as per ASCII
*
* Return: 0 if not a lower case, 1 if a lower case
*/

int _islower(int i)
{
	int result;

	if (i >= 97 && i <= 122)
		result = 1;
	else
		result = 0;

	return (result);
}
