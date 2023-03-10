#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Afunction that dds positive numbers
 * @argc: Size of array
 * @argv: Array pointer
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
int a, b, sum;

sum = 0;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (!isdigit(argv[a][b]))
{
return (puts("Error"), 1);
}
}
sum += atoi(argv[a]);
}
return (printf("%d\n", sum), 0);
}
