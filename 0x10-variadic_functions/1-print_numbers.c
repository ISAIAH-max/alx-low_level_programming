#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers- function that prints numbers, followed by a new line.
 *@separator:string to be printed between numbers
 *@n: Number of arguments used
 *Return: Always zero (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
int nums;

va_list numbers;
va_start(numbers, n);

for (x = 0; x < n; x++)
{
nums = va_arg(numbers, int);
printf("%d", nums);

if (x != (n - 1) && separator != NULL)
printf("%s", separator);

}
printf("\n");
va_end(numbers);
}
