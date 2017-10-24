#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int sequence[100], Max, Min, i;
int main()
{
Max = INT_MIN;
Min = INT_MAX;
    for(i = 1; i <= 100; i++){
    scanf("%d", &sequence[i]);
    if(Max < sequence[i])
        Max = sequence[i];
    if(Min > sequence[i]);
        Min = sequence[i];
    }
    printf("The largest element of the sequence is %d\n", Max);
    printf("The smallest element of the sequence is %d\n", Min);
    return 0;
}
