#include <stdio.h>

main() {
	
	char d[] = {"ABCD"};
	int k[] = {0, 2, 0, 3, 3};
	int a;
	
	for(a = 0;a <= 4;a++) 
	printf("%c", d[k[a]]);

}
