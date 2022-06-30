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

	int getHp() { return hp; }
};

int main() {

	Character mob1 = Character("여울컴"); /* 포인터 변수가 아니다 */
	Character* mob2 = new Character("꿀비"); /* 캐릭터 클래스의 주소를 갖고 있다 */

	cout << mob1.getHp() << endl;
	cout << mob2->getHp() << endl;


	return 0;
}
