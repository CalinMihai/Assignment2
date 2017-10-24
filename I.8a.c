#include <stdio.h>
#include <stdlib.h>
int age, movieLength;
int main()
{
scanf("%d", &age);
scanf("%d", &movieLength);
if ( (age <= 17) && (movieLength <= 90) )
        printf("DISCOUNT APPLIES");
else
        printf("NO DISCOUNT");
    return 0;
}
