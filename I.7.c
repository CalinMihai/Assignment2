#include <stdio.h>
#include <stdlib.h>
int i, number, factors;
int main()
{
factors = 0;
scanf("%d", &number);
    for(i = 2; i <= number/2; i++)
        if(number%i == 0)
            factors = factors + 1;
if(factors != 0)
    printf("%d is not a prime number\n", number);
else
    printf("%d is a prime number\n", number);
    return 0;
}
