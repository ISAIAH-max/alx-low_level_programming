#include "main.h"

/**
 *_isupper - A function that checks for uppercase character
 *@c: An uppercase
 *Return: Always zero(success)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

return (0);

}
