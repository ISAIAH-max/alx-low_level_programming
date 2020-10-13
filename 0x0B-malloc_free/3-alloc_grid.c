#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid -function that returns a pointer to a 2
 *dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return:  2D array
 */
int **alloc_grid(int width, int height)
{
int x, y;
int **arr;

if (width <= 0 || height <= 0)
return (NULL);
arr = (int **)malloc(sizeof(int *) * height);
if (arr == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
arr[x] = (int *)malloc(sizeof(int) * width);
if (arr[x] == NULL)
{
for (y = 0; y < x; y++)
free(arr[y]);
free(arr);
return (NULL);
}
for (y = 0; y < width; y++)
{
arr[x][y] = 0;
}
}
return (arr);
}
