#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars,
 *and initializes it with a specific char
 *@size: Size of array of chars to be created
 *@c: Array chars created
 *Return:Returns NULL if size = 0
 *Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *array = NULL;
unsigned int i;

if (size == 0)
return (NULL);
if (size != 0)
{
array = (char *)malloc(size * sizeof(char));
if (array != NULL)
{
for (i = 0; i < size; i++)
array[i] = c;
}
}
return (array);
}
