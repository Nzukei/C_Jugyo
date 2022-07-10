#include <stdio.h>

main() {
	int num, i, k;
	
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		for(k=i; k<(num-1); k++){
			printf(" ");
		}
		for(k=0;k<=(i*2); k++){
			printf("*");
		}
		printf("\n");
	}
}
