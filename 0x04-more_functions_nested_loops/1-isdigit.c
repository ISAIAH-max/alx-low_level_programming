#include "holberton.h"

/**
 *_isdigit - Function that prints the numbers from 0 to 9
 *@c: the digits
 *Return: Always zero (success)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 58)
return (1);
else
return (0);
}
