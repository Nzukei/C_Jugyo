#include <stdio.h>

main() {
    int k;
    int g[] = {84, 76, 54, 80, 65};
    for(k=0;k<=4;k++) {
        switch(g[k] / 10) {
            case 10 : printf("A");
            break;
            case 9 : printf("A");
            break;
            case 8 : printf("B");
            break;
            case 7 : printf("C");
            break;
            case 6 : printf("D");
            break;
            default : printf("F");
            break;
        }
    }
}
