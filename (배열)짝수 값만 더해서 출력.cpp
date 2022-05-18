#include <stdio.h>

main() {
	
	int a, sum = 0;
	int num[5] = {2, 5, 7, 8, 6};
	
	for(a = 0;a <= 4;a++) {
		if(num[a] % 2 == 0)
			sum += num[a];
	printf("%3d\n", sum);
	}
	
}
