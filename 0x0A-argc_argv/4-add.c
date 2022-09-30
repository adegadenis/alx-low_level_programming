#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints its name, followed by new.
 * @argc: argument counter, number of command line arguments.
 * @argv: argument vector-array that contains program command line arguments.
 * Return: zero.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
