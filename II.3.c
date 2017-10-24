#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float delta, x1, x2, a, b, c;
int main()
{
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);

delta = b*b - 4*a*c;
    if(delta >= 0){
        x1 = (-b + sqrt(delta))/2;
        x2 = (-b - sqrt(delta))/2;
        printf("The solutions of the ecuation are:%f, %f\n", x1, x2);
    }
    else
        printf("It doesn't have real solutions\n");
    return 0;
}
