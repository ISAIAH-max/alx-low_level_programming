#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings-function that prints strings, followed by a new line
 *@separator:the string to be printed between the strings
 *@n:number of strings passed to the function
 *Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list strings;

va_start(strings, n);

for (i = 0; i < n; i++)
{
s = va_arg(strings, char *);

if (s)
printf("%s", s);

else
printf("(nil)");

if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
