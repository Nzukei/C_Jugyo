#include <stdio.h>

main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("yourHand: %d, myHand: %d \n", a, b);
	if(a == 1 && b == 3)
	printf("yourHand���� �¸��ϼ˽��ϴ�~");
	else if(a == 2 && b == 1)
	printf("yourHand���� �¸��ϼ˽��ϴ�~");
	else if(a == 3 && b == 2)
	printf("yourHand���� �¸��ϼ˽��ϴ�~");
// yourHand�� �̱�� ��츦 �� ���ϴ�
	else if(a == b)
	printf("�����ϴ�");
// ���� ��츦 �� ���ϴ�
	else
	printf("myHand���� �¸��ϼ˽��ϴ�~");
//������ ��츦 myHand�� �̱�ϴ�
}
