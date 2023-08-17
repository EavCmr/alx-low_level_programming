#include <stdio.h>
/**Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *Prototype: void print_alphabet_x10(void);
 *You can only use _putchar twice in your code
 */
#include <unistd.h>
void print_alphabet_x10(void) 
{
    char letter = 'a';
    int i;

    for (i = 0; i < 10; i++) 
    {
        while (letter <= 'z') 
	{
            _putchar(letter);
            letter++;
        }
        letter = 'a';
    }
    _putchar('\n');
}
