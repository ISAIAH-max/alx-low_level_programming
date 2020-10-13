#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat -function that concatenates two strings
 *@s1:First String
 *@s2:Second String
 *Return:returned pointer point to a newly allocated space
 *in memory which contains the contents of s1
 *return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
char *s1s2;

int  index, index1, cindex = 0, len = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (index = 0, index1 = 0; s1[index] || s2[index1]; index++, index1++)
len++;

s1s2 = malloc(sizeof(char) * len);

if (s1s2 == NULL)
return (NULL);

for (index = 0; s1[index]; index++)
s1s2[cindex++] = s1[index];

for (index1 = 0; s2[index1]; index1++)
s1s2[cindex++] = s2[index1];

return (s1s2);
}
