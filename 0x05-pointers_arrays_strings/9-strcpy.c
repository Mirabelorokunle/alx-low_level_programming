#include <stdio.h>

/**
 * _strcpy - function
 * @src: source
 * @dest: destination
 * Return: str
 */

char *_strcpy(char *dest, char *src)
{
	int cnt = 0, ind;
	char *tmp = src;

	while (*tmp)
	{
		cnt++;
		tmp++;
	}

	for (ind = 0; ind < cnt; ind++)
		dest[ind] = src[ind];
	dest[cnt] = '\0';

	return (dest);
}
