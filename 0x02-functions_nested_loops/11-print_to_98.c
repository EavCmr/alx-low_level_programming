#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
    if (n <= 98) 
    { // if n is less than or equal to 98, print all numbers from n to 98
        for (int i = n; i <= 98; i++) 
	{
            printf("%d", i); // print the number
            if (i != 98) 
	    { // if it's not the last number, print a comma and space
                printf(", ");
            }
        }
    } 
    else 
    { // if n is greater than 98, print all numbers from n to 98 in reverse order
        for (int i = n; i >= 98; i--) 
	{
            printf("%d", i); // print the number
            if (i != 98) 
	    { // if it's not the last number, print a comma and space
                printf(", ");
            }
        }
    }
    printf("\n"); // print a new line at the end
}
