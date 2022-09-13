#include <stdio.h>
/**
 * main - Prints alphabet in both lower and upper case
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'z')
	{
		putchar(c);
		d++;
	}
	putchar('\n');
	return (0);
}
