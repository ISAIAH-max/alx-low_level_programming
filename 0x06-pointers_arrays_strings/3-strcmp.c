#include "holberton.h"

/**
 *_strcmp - A function that compares two strings
 *@s1: String one
 *@s2: String two
 *Return: Always zero(success)
 */

int _strcmp(char *s1, char *s2)
{
for (; *s1 == *s2; s1++, s2++)
if (*s1 == '\0')
return (0);
return (*s1 - *s2);
}
