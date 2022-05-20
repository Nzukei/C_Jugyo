#include <stdio.h>

main() {
    int a, b, num=5;
    for(a=0; a<num; a++) {
        for(b=num-1; b>a; b--) {
            printf(" ");
        }
        for(b=0; b<2*a+1; b++) {
            printf("*");
        }
        printf("\n");
    }
}

//    *
//   ***
//  *****
// *******
//*********
