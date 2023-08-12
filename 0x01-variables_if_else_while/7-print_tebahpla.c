#include <stdio.h>
/*prints the lowercase in reverse, followed by new line*/
int main(void)
{
	char ch;

	for (ch = 'z' ; ch>= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
