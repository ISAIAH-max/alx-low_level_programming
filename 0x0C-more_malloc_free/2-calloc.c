#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc -function that allocates memory for an array, using malloc
 *@nmemb:number of elements
 *@size:size of bytes
 *Return:If nmemb or size is 0, then _calloc returns NULL
 *If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int x;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

for (x = 0; x < (nmemb * size); x++)
ptr[x] = 0;
return (ptr);
}
