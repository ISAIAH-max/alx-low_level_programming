#include "holberton.h"

/**
 *_strlen - unction that returns the length of a string
 *@s:The string to be used
 *Return: Always zero(success)
 */

int _strlen(char *s)
{
int len;

len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
