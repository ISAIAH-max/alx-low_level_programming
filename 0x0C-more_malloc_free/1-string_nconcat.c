#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat -a function that concatenates two strings
 *@s1: String one used
 *@s2: String Two used
 *@n: Number of bytes used by each string
 *Return:return NULL if function fails
 *If n is greater or equal to the length of s2 then use the entire string s2
 *if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y, z;
char *str;

if (s1 == NULL)
x = 0;
else
{
for (x = 0; s1[x]; x++)
;
}
if (s2 == NULL)
y = 0;
else
{
for (y = 0; s2[y]; y++)
;
}
if (y > n)
y = n;
str = malloc(sizeof(char) * (x + y + 1));
if (str == NULL)
return (NULL);
for (z = 0; z < x; z++)
str[z] = s1[z];
for (z = 0; z < y; z++)
str[z + x] = s2[z];
str[x + y] = '\0';
return (str);
}
