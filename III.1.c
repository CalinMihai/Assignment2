#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n, i, x[100];
float sigma, s1, s2, numarator, numitor, fractie;
int main()
{
s1 = 0;
s2 = 0;
scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &x[i]);
        s1 = s1 + x[i]*x[i];
        s2 = s2 + x[i];}
    numarator = n*s1 - s2*s2;
    numitor = n*(n-1);
    fractie = numarator/numitor;
    sigma = sqrt(fractie);
        printf("Sigma=%f\n", sigma);
    return 0;
}
