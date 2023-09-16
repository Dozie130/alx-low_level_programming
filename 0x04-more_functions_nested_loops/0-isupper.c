#include "main.h"

/**
 * _isupper - Detect upper case alphabets.
 * @c: Input character.
 *
 * Return: 1 for true, 0 for false.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

