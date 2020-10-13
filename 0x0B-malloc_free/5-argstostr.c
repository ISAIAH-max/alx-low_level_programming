#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr -function that concatenates all the
 *arguments of your program.
 *@ac:Number of arguments passed to the program.
 *@av:An array of pointers to the arguments.
 *Return:Returns NULL if ac == 0 or av == NULL
 *returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
char *s;
int ar, x, index, size = ac;

if (ac == 0 || av == NULL)
return (NULL);

for (ar = 0; ar < ac; ar++)
{
for (x = 0; av[ar][x]; x++)
size++;
}
s = malloc(sizeof(char) * size + 1);

if (s == NULL)
return (NULL);

index = 0;

for (ar = 0; ar < ac; ar++)
{
for (x = 0; av[ar][x]; x++)
s[index++] = av[ar][x];

s[index++] = '\n';
}
s[size] = '\0';

return (s);
}
