#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch, Uch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (Uch = 'A'; Uch <= 'Z'; Uch++)
{
putchar(Uch);
}
putchar('\n');
return (0);
}
