#include <stdio.h>

main() {
	
	int k, m;
	int a[] = {1, 5, 3, 2, 1, 4, 2, 5, 3, 1};
	int cnt[5] = {0, 0, 0, 0, 0};
	
	for(k = 0;k <= 9;k++) {
		for(m = 1;m <= 5;m++) {
			if(a[k] == m)
				cnt[m-1] += 1;
		}
	}
	for(m = 0;m <= 4;m++) {
		printf("%d | %d\n", m + 1, cnt[m]);
	}
	
}

/* different */

#include <stdio.h>

main() {
	
	int k, m;
	int a[] = {1, 5, 3, 2, 1, 4, 2, 5, 3, 1};
	int cnt[5] = {0, };
	
	for(k = 0;k <= 9;k++) {
		for(m = 1;m <= 5;m++) {
			if(a[k] == m)
				cnt[m-1] += 1;
		}
	}
	for(m = 0;m <= 4;m++) {
		printf("%d | %d\n", m + 1, cnt[m]);
	}
	
}
