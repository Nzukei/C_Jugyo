#include <stdio.h>

main() {
	int k, m, sum=0;
	int n1[] = {1, 3, 2, 5, 7};
	int n2[] = {1, 3, 5, 3, 4};
	for(k=0; k<=4; k++) {
		for(m=0; m<=4; m++) {
			if(n1[k]==n2[m])
			n2[m]=0;
//n[2] = {0, 0, 0, 0, 4};
		}
	}
	for(k=0;k<=4; k++)
	sum = sum + n1[k] +n2[k];
//0 + (1 + 0) + (3 + 0) + (2 + 0) + (5 + 0) + (7 + 4)
	printf("%d", sum);
}
