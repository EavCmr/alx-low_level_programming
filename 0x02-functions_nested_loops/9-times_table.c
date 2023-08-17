#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
	int digit, mult, result;
	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0');
	}
	for (mult = 1; mult <= 9; mult++)
	{
		putchar(',');
                putchar(' ');
                result = digit * mult;
		if (result <= 9)
			putchar(' ');
		else
			putchar((result / 10) + '0');
		        putchar((result % 10) + '0');
	}
	putchar('\n');
}
