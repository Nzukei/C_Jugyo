#include <stdio.h>

main() {
    int k, m, num=13;
    char ch1= '*', ch2 = ' ';
    for(k=1; k<=num; k++) { 
        for(m=1; m<=num; m++) { 
            if(k==m || k+m==num+1)
            printf("%c", ch1);
            else
        printf("%c", ch2);
        }
    printf("\n");
    }
}
