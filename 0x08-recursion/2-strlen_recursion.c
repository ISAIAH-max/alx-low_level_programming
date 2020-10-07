#include "holberton.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: String being checked
 * Return: returns the length of a string
 */

int _strlen_recursion(char *s)
{
int len;
len = 0;
if (s[len] != '\0')
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
