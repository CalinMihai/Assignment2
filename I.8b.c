#include <stdio.h>
#include <stdlib.h>
int age, movieLength;
int main()
{
scanf("%d", &age);
scanf("%d", &movieLength);
if ( (age >= 17) || (movieLength >= 90) )
        printf("NO DISCOUNT");
else
        printf("DISCOUNT APPLIES");
    return 0;
}
