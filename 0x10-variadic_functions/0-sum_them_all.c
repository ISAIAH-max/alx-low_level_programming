#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all- function that returns the sum of all its parameters
 *@n: Number of argumnets passed to sum_them_all function
 *Return: Always zero(success)
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int sum = 0;

va_list list;

va_start(list, n);

if (n == 0)
return (0);

for (x = 0; x < n; x++)
{
sum += va_arg(list, int);
}
va_end(list);
return (sum);
}
