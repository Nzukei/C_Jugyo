#include <iostream>

using namespace std;
/* std는 작은 모듈(import) 같은 것 */

class Character {
public:
	int hp = 100;
	int mp = 100;
	int dmg = 10;
	string name = "여울컴";
};

int main() {

	Character me;
	cout << me.hp << endl;
	/* 클래스 Character에 있는 hp 값 출력 */

	return 0;
}
