#include <stdio.h>

/**
 * main - Prints a text
 *
 * Description: using the main function
 * Return: 1 if success
 */
int main(void)
{
	write(2,
		"and that piece of art is usefu\" - Dora Korpar, 2015-10-19\n",
		59);
	return (1);
}
