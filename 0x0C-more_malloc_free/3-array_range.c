#include "main.h"
#include <stdlib.h>

/**
 *array_range -function that creates an array of integers
 *@min: Old array
 *@max: Newly created array
 *Return:the pointer to the newly created array
 *If min > max, return NULL
 *If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
int x, y;
int *arr;

if (min > max)
return (NULL);
y = max - min + 1;
arr = malloc(sizeof(int) * y);
if (arr == NULL)
return (NULL);

for (x = 0; x < y; x++, min++)
{
arr[x] = min;
}
return (arr);
}
