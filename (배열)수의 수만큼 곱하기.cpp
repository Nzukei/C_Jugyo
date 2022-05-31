#include <stdio.h>

main() {
	int k, m, s=0;
	int a[3] = {2, 1, 3};
	for(k=0;k<=2;k++) {
		for(m=1;m<=a[k];m++) {
			s+=a[k];
// 0 + (2 + 2) + 1 + (3 + 3 + 3)
		}
	}
	printf("%d", s);
}
