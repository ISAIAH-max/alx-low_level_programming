#include "main.h"

/**
 *rev_string - function that reverses a string
 *@s: String used
 *
 */

void rev_string(char *s)
{
int forward, reverse, temp;

while (s[forward] != '\0')
{
forward++;
}
forward--;

for (reverse = 0; reverse < forward; reverse++, forward--)
{
temp = s[forward];
s[forward] = s[reverse];
s[reverse] = temp;
}
}
