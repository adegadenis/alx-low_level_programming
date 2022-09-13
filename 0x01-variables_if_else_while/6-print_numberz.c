#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
