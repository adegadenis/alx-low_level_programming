#include <stdio.h>

/**
 * main - Prints rint numbers from 00 to 99
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	int b;

	a = '0';
	b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (!(a > b || a == b))
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = '0';
		a++;
	}
	return (0);

}
