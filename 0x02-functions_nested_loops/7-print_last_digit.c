#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns 0
*/
int print_last_digit(int n)
{
    int last_digit = abs(n) % 10; // get the absolute value of n and then the last digit
    printf("%d\n", last_digit); // print the last digit
    return last_digit; // return the value of the last digit
}
