#include <iostream>

using namespace std;
/* std는 작은 모듈(import) 같은 것 */

namespace name {
	int asdf = 3;
	double qwer = 3.141592;

	void println() {
		cout << endl;
	}
}

int main() {

	cout << name::asdf;

	return 0;
}
