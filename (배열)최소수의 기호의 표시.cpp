#include <stdio.h>

main() {
	int a, b;
	int n[] = {6, 3, 1, 7, 4};
	char c[] {"abcde"};
	char p;
	b = n[0];
	
	for(a=0;a<=4;a++) {
		if(n[a] < b) {
			b = n[a];
// 
			p = c[a];
		}
	}
	printf("%c", p);
}
