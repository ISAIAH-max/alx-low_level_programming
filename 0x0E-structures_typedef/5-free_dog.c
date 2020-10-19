#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -A function that frees dogs
 * @d: pointer to dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
