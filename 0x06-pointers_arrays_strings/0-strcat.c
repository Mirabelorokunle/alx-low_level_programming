#include <stdio.h>

/**
 * _strncat - function
 * @dest: dest
 * @src: src
 * @n: number of bytes
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	int i = 0, j = 0;

	while (d[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
