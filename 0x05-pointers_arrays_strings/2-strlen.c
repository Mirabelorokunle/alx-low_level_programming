#include <stdio.h>

/**
 * _strlen - function
 * @s: ptr
 * Return: length of str
 */

int _strlen(char *s)
{
	int num;

	num = 0;
	while (*s)
	{
		num++;
		s++;
	}

	return (num);
}
