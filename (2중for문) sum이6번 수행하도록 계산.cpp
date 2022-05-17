#include <stdio.h>

main() {
    int k, m, sum=0;
    for(k=1; k<=3; k++) {
        for(m=1; m<=k; m++)
        sum+=m;
    } //sum=0+1(1번), sum=1+1+2(2번), sum=4+1+2+3(3번) 
    printf("%d", sum);
