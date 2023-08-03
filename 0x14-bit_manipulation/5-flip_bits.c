#include "main.h"

/**
 * flip_bits - this program will count the
 * numb of bits to we wish to chhange change
 * @n: the dfirst number
 * @m: the second numb
 *
 * Return: numb of bits to we changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter, countz = 0;
	unsigned long int currNum;
	unsigned long int xclusiveNum = n ^ m;

	for (counter = 63; counter >= 0; counter--)
	{
		currNum = xclusiveNum >> counter;
		if (currNum & 1)
			countz++;
	}

	return (countz);
}
