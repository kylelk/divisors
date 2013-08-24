#include <stdio.h>

int main()
{
    int i;	
    int divisor;
    int total;
    
    printf("Enter a number:\n");
    scanf("%d", &i);
    for (divisor = 1; divisor <= i; divisor++)
    {
        if ((i % divisor == 0))
        {
            total++;
        }
    }
    printf("%d has %d divisors.\n", i, total);
    return 0;
}
