#include "main.h"
/**
 *_strcat - concatenates two strings
 * @dest: Pointer to the destination string
 * @src: pointer to the source string
 *Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
