#include "main.h"

/**
 * print_binary - thid progrm will printout the
 * binary equivalent of a decimal number
 * @n: pepresents the number to print in binary form
 */
void print_binary(unsigned long int n)
{
	int nuM, counteR = 0;
	unsigned long int currVar;

	for (nuM = 63; nuM >= 0; nuM--)
	{
		currVar = n >> nuM;

		if (currVar & 1)
		{
			_putchar('1');
			counteR++;
		}
		else if (counteR)
			_putchar('0');
	}
	if (!counteR)
		_putchar('0');
}
