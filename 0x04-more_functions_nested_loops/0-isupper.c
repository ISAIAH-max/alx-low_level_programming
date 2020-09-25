#include "holberton.h"

/**
 *_isupper - A function that checks for uppercase character
 *@c: An uppercase
 *Return: Always zero(success)
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
