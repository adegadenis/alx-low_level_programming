#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *  @c: The character to be checked
 *
 *  Return: 1 for lowercase character or 0 for anything else
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

}
