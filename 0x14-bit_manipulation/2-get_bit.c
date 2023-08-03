#include "main.h"

/**
 * get_bit - this program is tp return the value
 * of a bit at that is an index in a decimal number
 * @n: rep the number to lookup
 * @index: index used to match of the bit
 *
 * Return: val of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVall;

	if (!(index > 63))
		bitVall = (n >> index) & 1;
	else
		return (-1);



	return (bitVall);
}
