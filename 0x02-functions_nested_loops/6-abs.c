#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @c: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (-c);
}