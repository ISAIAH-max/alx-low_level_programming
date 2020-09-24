#include "holberton.h"

/**
 *_isupper - function that checks for uppercase character
 *@c: The int number used for interation
 *Return: Always zero (success)
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);

else
return (0);
}
