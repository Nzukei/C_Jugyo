#include <iostream>

using namespace std;
/* std는 작은 모듈(import) 같은 것 */

int main() {

	int arr[10] = { 0, };

	for (int i = 0; i < 10; i++)
		arr[i] = i + 1;

	for (int value : arr)
	/* arr 개수만큼 출력한다. 유지 보수하기가 쉽다(たとえ、ランダムの数を取れる時使えば楽) */
	{
		cout << value << endl;
	}

	return 0;
}
