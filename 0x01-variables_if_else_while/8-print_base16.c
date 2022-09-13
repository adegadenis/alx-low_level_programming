#include <stdio.h>

/**
 * main - Prints all numbers of base 16  hexadecimal string
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	i = 'a';

	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
