#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - last digits of numbers
 *Return: Zero
*/

int main(void)
{
int n, l_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

l_digit = n % 10;
if (l_digit > 0)

{
printf("The number %d is positive\n", n);
}
else if (l_digit == 0)
{
printf("The number %d is zero\n", n);
}
else if (l_digit < 0)
{
printf("The number %d is negative\n", n);
}

return (0);
}
