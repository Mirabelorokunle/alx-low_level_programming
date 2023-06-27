#include <stdio.h>

/**
 * print_array - function
 * @a: ptr
 * @n: number
 */

void print_array(int *a, int n)
{
	int cnt = 0, ind, *b = a;

	while (*a)
	{
		cnt++;
		a++;
	}

	if (cnt >= n)
	{
		for (ind = 0; ind < n; ind++)
		{
			if (ind > 0 && ind < n)
				printf(", ");
			printf("%d", b[ind]);
		}
		putchar('\n');
	}
}
