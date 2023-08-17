#include <stdio.h>

int main() {
    int term1 = 1;
    int term2 = 2;
    int nextTerm = 0;
    int sum = 2; // Start with sum as 2 since the second term is even

    while (nextTerm <= 4000000) 
    {
        nextTerm = term1 + term2;

        if (nextTerm % 2 == 0) 
	{
            sum += nextTerm;
        }

        term1 = term2;
        term2 = nextTerm;
    }

    printf("Sum of even-valued terms: %d\n", sum);

    return 0;
}
