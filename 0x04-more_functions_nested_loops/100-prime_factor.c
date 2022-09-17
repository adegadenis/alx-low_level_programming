#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, maxf;

	n = 612852475143;

	for (maxf = 2; maxf <= n; maxf++)
	{
		if (n % maxf == 0)
		{
			n /= maxf;
			maxf++;
																			}
	}
	printf("%ld\n", maxf);
	return (0);
}

