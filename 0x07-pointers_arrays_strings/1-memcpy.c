#include "holberton.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: Second memory area
 * @src: First memory area
 * @n: bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *x;
x = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (x);
}
