#include <stdio.h>

main() {
	
	int m[] = {1, 3, 4, 5};
	int n[] = {1, 2, 4, 5};
	
	int a, sum = 0;
	for(a = 0;a <= 3;a++) {
		if(m[a] == n[a])
			sum += 5;
	}
	printf("%d", sum);
	
}
