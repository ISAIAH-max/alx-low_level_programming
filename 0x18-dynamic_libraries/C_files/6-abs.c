#include "main.h"

/**
 *_abs - function that compute the abspolute value of an interger
 *@n: parametrix
 *Return: Always 0(success)
 */

int _abs(int n)
{
if (n < 0)
{
n = (-1) * n;
return (n);
}
else if (n == 0)
{
return (0);
}
else if (n > 0)
{
return (n);
}
return (0);
}
