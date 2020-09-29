#include "holberton.h"

/**
 * _strcpy - A function that copies the string pointed to
 * by src, including the terminating null byte (\0), to
 * the buffer pointed to by dest
 * @dest: String copied
 * @src:  String to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int x = 0;

while (src[x])
{
dest[x] = src[x];
x++;
}
return (dest);
}
