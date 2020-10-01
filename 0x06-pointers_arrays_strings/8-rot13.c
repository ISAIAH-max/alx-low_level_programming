#include "holberton.h"

/**
 * rot13 - A function that encodes a string using rot13
 * @s: String used
 * Return: Returns an encodes @s string
 */

char *rot13(char *s)
{
int x = 0, x2;
char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
'G', 'H', 'I', 'J', 'K', 'L',
'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', 'a', 'b', 'c', 'd',
'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v',
'w', 'x', 'y', 'z'
};

char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
'T', 'U', 'V', 'W', 'X', 'Y',
'Z', 'A', 'B', 'C', 'D', 'E',
'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'n', 'o', 'p', 'q',
'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z', 'a', 'b', 'c',
'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm'
};
while (s[x])
{
for (x2 = 0; x2 < 52; x2++)
{
if (s[x] == alphabet[x2])
{
s[x] = rot13key[x2];
break;
}
}
x++;
}
return (s);
}
