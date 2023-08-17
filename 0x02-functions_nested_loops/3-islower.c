#include <main.h>
/**
 *Write a function that checks for lowercase character.
 *return 1 if it's and 0 if it isn't
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}
