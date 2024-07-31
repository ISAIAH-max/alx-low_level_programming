#include "main.h"

/**
 * _memset - Afunction that fills memory with a constant byte
 * @s: A pointer to the block of memory to fill
 * @b: the value to be set
 * @n: number of bytes to be set to the value
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int x;
x = 0;
while (n > 0)
{
s[x] = b;
x++;
n--;
}
return (s);
}
