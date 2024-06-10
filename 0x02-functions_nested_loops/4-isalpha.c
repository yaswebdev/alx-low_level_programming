#include "main.h"

/**
 * _isalpha - function prototype that checks the charactere is a letter or not
 * @c: the caractere that we should check
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
