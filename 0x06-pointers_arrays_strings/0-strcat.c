#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int o;
int m;
[#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int o;
int m ;
o = 0;
while (dest[o] != '\0')
{
o++;
}
m = 0;
while (src[m] != '\0')
{
dest[o] = src[m];
o++;
m++;
}
dest[i] = '\0';
return (dest);
}
o = 0;
while (dest[o] != '\0')
{
o++;
}
m = 0;
while (src[m] != '\0')
{
dest[o] = src[m];
o++;
m++;
}
dest[o] = '\0';
return (dest);
}

