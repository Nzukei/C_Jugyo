#include <iostream>

using namespace std;
/* std는 작은 모듈(import) 같은 것 */

class Character {
private: /* private는 class 안에 갇혀있어 값을 바꿀 수 없음 */
	int hp = 100;
	int mp = 100;
public: /* public은 class 이외에 곳에서도 값을 바꿀 수 있음 */
	int dmg = 10;
	string name = "여울컴";

	Character(int hp, int mp, int dmg, string name) {
		this->hp = hp;
		this->mp = mp;
		this->dmg = dmg;
		this->name = name;
		}

	Character(string name): hp(100), mp(100), dmg(10), name(name) { }

	inline Character* retCh() { return this; } /* inline 함수가 가벼워진다. 함수가 메모리에 안잡힘 */

	int getHp() { return hp; }
};

int main() {

	Character* me = new Character("아기고양이");

	me->retCh()->retCh()->retCh()->retCh()->retCh()->retCh()->retCh()->retCh();
	/* me->retCh() == me */

	return 0;
}
