#include <stdio.h>
#include <unistd.h>
/**Write a function that prints the alphabet, in lowercase, followed by a new line.
 *Prototype: void print_alphabet(void);
 *You can only use _putchar twice in your code
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar('\n');
}

