#include "main.h"

/**
 * _isupper- checks for alphabetic character
 * @c: the character to check
 * Return: 1 if c is a letter (uppercase), 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
