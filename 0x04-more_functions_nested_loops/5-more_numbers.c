#include <stdio.h>

/**
 * more_numbers - function
 */
void more_numbers(void)
{
	int c, v;

	for (v = 0; v <= 9; v++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				putchar('1');
			putchar((c % 10) + '0');
		}
		putchar('\n');
	}
}
