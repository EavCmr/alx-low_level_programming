#include "main.h"
/**
*jack_bauer - prints each minute of the day
*
*Return:returns 0
*/
void jack_bauer(void)
{
    for (int hour = 0; hour < 24; hour++) 
    { // loop through all the hours
        for (int minute = 0; minute < 60; minute++) 
	{ // loop through all the minutes
            printf("%02d:%02d\n", hour, minute); // print the time in the format hh:mm
        }
    }
}
