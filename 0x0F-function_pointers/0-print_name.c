#include "function_pointers.h"

/**
 *print_name- A function that prints a name
 *@name: name of a person
 *@f: function to print used to print the name
 *Return: void
 */


void print_name(char *name, void (*f)(char *))
{
if (name != '\0' && f != '\0')
f(name);
}
