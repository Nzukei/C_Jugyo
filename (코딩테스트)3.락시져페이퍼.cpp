#include <stdio.h>

main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("yourHand: %d, myHand: %d \n", a, b);
	if(a == 1 && b == 3)
	printf("yourHand님이 승리하셧습니다~");
	else if(a == 2 && b == 1)
	printf("yourHand님이 승리하셧습니다~");
	else if(a == 3 && b == 2)
	printf("yourHand님이 승리하셧습니다~");
// yourHand가 이기는 경우를 다 씁니다
	else if(a == b)
	printf("비겼습니다");
// 비기는 경우를 다 씁니다
	else
	printf("myHand님이 승리하셧습니다~");
//나머지 경우를 myHand가 이깁니다
}
