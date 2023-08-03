#include "main.h"

/**
 * get_endianness - verifies if a machine is a lil or a big endian
 * Return: 0 for big and 1 for lil
 */
int get_endianness(void)
{
	unsigned int count = 1;
	char *chaR = (char *) &count;

	return (*chaR);
}
