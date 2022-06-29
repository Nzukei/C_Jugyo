#include <iostream>

using namespace std;
/* std는 작은 모듈(import) 같은 것 */

class Character {
private: /* private는 class 안에 갇혀있어 접근이 불가능하다 */
	int hp = 100;
	int mp = 100;
public: /* public은 class 이외에 접근이 가능하다 */
	int dmg = 10;
	string name = "여울컴";

	int getHp() { return hp; }
};

int main() {

	Character me;
	cout << me.getHp() << endl;
	/* 클래스 Character에 있는 hp 값 출력 */

	return 0;
}
