#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a[100], i, NumberOfZeros;
int produs;
int main()
{
produs = 1;
    for(i = 1; i <= 100; i++){
        scanf("%d", &a[i]);
        produs = produs*a[i];}
    while(produs != 0)
    if(produs%10 == 0){
        NumberOfZeros = NumberOfZeros + 1;
        produs = produs/10;}
    else
        produs = produs/10;
    printf("p is ending in %d zeros\n", NumberOfZeros);
    return 0;
}
